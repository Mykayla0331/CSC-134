// mykayla
// m6lab2

#include <iostream>
#include <string>
using namespace std;

enum Direction { NORTH, EAST, SOUTH, WEST, NUM_DIRECTIONS };
const string DIR_NAMES[NUM_DIRECTIONS] = {"north","east","south","west"};

enum Area { SPAWN, MID, SNIPE, ENEMY_BASE, HOME_BASE, NUM_AREAS };

int main() {
    string areaNames[NUM_AREAS] = {
        "Spawn Point",
        "Mid Lane",
        "Snipe Zone",
        "Enemy Base",
        "Home Base"
    };

    int conn[NUM_AREAS][NUM_DIRECTIONS];

    for (int i=0;i<NUM_AREAS;i++)
        for (int j=0;j<NUM_DIRECTIONS;j++)
            conn[i][j] = -1;

    // Map layout (more competitive style)
    conn[SPAWN][NORTH] = MID;

    conn[MID][SOUTH] = SPAWN;
    conn[MID][EAST]  = SNIPE;
    conn[MID][WEST]  = HOME_BASE;
    conn[MID][NORTH] = ENEMY_BASE;

    conn[SNIPE][WEST] = MID;
    conn[ENEMY_BASE][SOUTH] = MID;
    conn[HOME_BASE][EAST] = MID;

    int current = SPAWN;

    int ink = 100;
    int health = 120;

    int paint[NUM_AREAS] = {60,0,0,0,50};
    int enemyPaint[NUM_AREAS] = {0,30,30,60,0};

    int enemyHealth[NUM_AREAS] = {120,120,120,120,120};

    bool running = true;

    cout << "=== RIP-OFF CHATGPT SPLATOON ===\n";
    cout << "Commands: north/east/south/west, shoot, swim, quit\n";

    while (running) {
        cout << "\n------------------\n";
        cout << "Area: " << areaNames[current] << endl;

        cout << "Your Health: " << health << endl;
        cout << "Enemy Health Here: " << enemyHealth[current] << endl;
        cout << "Ink: " << ink << endl;

        cout << "Control: ";
        if (paint[current] > enemyPaint[current]) cout << "YOU\n";
        else if (paint[current] < enemyPaint[current]) cout << "ENEMY\n";
        else cout << "NEUTRAL\n";

        cout << "Exits: ";
        for (int d=0; d<NUM_DIRECTIONS; d++)
            if (conn[current][d] != -1)
                cout << DIR_NAMES[d] << " ";
        cout << endl;

        string cmd;
        cout << "> ";
        cin >> cmd;

        auto movePlayer = [&](int dir) {
            int next = conn[current][dir];
            if (next != -1) {
                current = next;

                // Player heals
                if (paint[current] > enemyPaint[current]) {
                    cout << "You move through your ink and recover!\n";
                    health += 12;
                    if (health > 120) health = 120;
                }

                // Enemy heals
                if (enemyPaint[current] > paint[current]) {
                    cout << "Enemy recovers in their ink...\n";
                    enemyHealth[current] += 12;
                    if (enemyHealth[current] > 120) enemyHealth[current] = 120;
                }

            } else {
                cout << "Can't go that way\n";
            }
        };

        if (cmd=="north"||cmd=="n") movePlayer(NORTH);
        else if (cmd=="east"||cmd=="e") movePlayer(EAST);
        else if (cmd=="south"||cmd=="s") movePlayer(SOUTH);
        else if (cmd=="west"||cmd=="w") movePlayer(WEST);

        else if (cmd=="shoot") {
            if (ink <= 0) {
                cout << "Out of ink!\n";
            } else {
                cout << "You spray ink!\n";
                ink -= 15;
                paint[current] += 30;

                enemyHealth[current] -= 20;
                if (enemyHealth[current] < 0) enemyHealth[current] = 0;
            }
        }

        else if (cmd=="swim") {
            if (paint[current] > enemyPaint[current]) {
                cout << "You swim and recharge!\n";
                ink += 15;
                if (ink > 100) ink = 100;
            } else {
                cout << "Can't swim in enemy ink!\n";
            }
        }

        else if (cmd=="quit") {
            running = false;
        }

        else {
            cout << "Unknown command\n";
        }

        // Enemy spreads ink
        enemyPaint[current] += 15;

        // Enemy attacks
        if (enemyPaint[current] > paint[current] && enemyHealth[current] > 0) {
            cout << "Enemy attacks you!\n";
            health -= 8;
        }

        // Lose
        if (health <= 0) {
            cout << "You got splatted. Game over.\n";
            running = false;
        }

        // Win
        bool win = true;
        for (int i=0;i<NUM_AREAS;i++) {
            if (paint[i] <= enemyPaint[i] || enemyHealth[i] > 0)
                win = false;
        }

        if (win) {
            cout << "\nYou covered everything and defeated enemies. YOU WIN!\n";
            running = false;
        }
    }

    cout << "Game over.\n";
    return 0;
}