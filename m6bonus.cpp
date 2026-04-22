//mykayla
//m6 bonus
//4-22-26

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
 
struct RGB { unsigned char r, g, b; };
 
// Lerp between two floats
float lerp(float a, float b, float t) { return a + (b - a) * t; }
 
// Clamp to [0,255]
unsigned char clamp(float v) {
    if (v < 0)   return 0;
    if (v > 255) return 255;
    return (unsigned char)v;
}
 
// Ombre: diagonal gradient (top-left = pink, bottom-right = orange)
// Same stops as the SVG linearGradient (x1=0 y1=0 x2=1 y2=1)
RGB ombre(int x, int y, int W, int H) {
    float t = ((float)x / W + (float)y / H) * 0.5f;
 
    // Color stops: 0% #f472b6, 45% #fb7185, 75% #f97316, 100% #ea580c
    struct Stop { float pos; float r, g, b; };
    Stop stops[] = {
        {0.00f, 244,114,182},
        {0.45f, 251,113,133},
        {0.75f, 249,115, 22},
        {1.00f, 234, 88, 12},
    };
    int n = 4;
 
    // Find which segment t falls in
    int i = 0;
    for (; i < n - 2; ++i)
        if (t <= stops[i+1].pos) break;
 
    float seg = (t - stops[i].pos) / (stops[i+1].pos - stops[i].pos);
    if (seg < 0) seg = 0;
    if (seg > 1) seg = 1;
 
    return {
        clamp(lerp(stops[i].r, stops[i+1].r, seg)),
        clamp(lerp(stops[i].g, stops[i+1].g, seg)),
        clamp(lerp(stops[i].b, stops[i+1].b, seg)),
    };
}
 
int main() {
    const int W = 800;
    const int H = 800;
 
    // Stripe parameters (matching SVG: period=60, width=20, rotate 45°)
    const float PERIOD   = 60.0f;
    const float STRIPE_W = 20.0f;
    const float OPACITY  = 0.45f;
 
    std::vector<RGB> image(W * H);
 
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            // --- Ombre base color ---
            RGB base = ombre(x, y, W, H);
 
            // --- Diagonal stripe (rotate 45°: project onto diagonal axis) ---
            // Rotating (x,y) by 45°: u = (x + y) / sqrt(2)
            // We only need u mod PERIOD to determine stripe membership
            float u = (x + y) / 1.41421356f;
            float mod = fmod(u, PERIOD);
            if (mod < 0) mod += PERIOD;
 
            // Stripe is centered at 0 (and wraps), half-width = STRIPE_W/2
            float half = STRIPE_W * 0.5f;
            bool inStripe = (mod < half) || (mod > PERIOD - half);
 
            if (inStripe) {
                // Blend white over base at OPACITY
                base.r = clamp(base.r + (255 - base.r) * OPACITY);
                base.g = clamp(base.g + (255 - base.g) * OPACITY);
                base.b = clamp(base.b + (255 - base.b) * OPACITY);
            }
 
            image[y * W + x] = base;
        }
    }
 
    // Write PPM (P6 binary)
    std::ofstream out("ombre_stripes.ppm", std::ios::binary);
    if (!out) {
        std::cerr << "Error: could not open ombre_stripes.ppm for writing.\n";
        return 1;
    }
    out << "P6\n" << W << " " << H << "\n255\n";
    for (const auto& px : image) {
        out.put((char)px.r);
        out.put((char)px.g);
        out.put((char)px.b);
    }
    out.close();
 
    std::cout << "Wrote ombre_stripes.ppm (" << W << "x" << H << " px)\n";
    return 0;
}