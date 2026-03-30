//m4lab1
// mykayla lewis
// 3/30/26

#include <iostream>
using namespace std;

int main() {
    cout << "m4lab1\n";

    int height, width;
    height = 5;
    width = 5;

    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }

    cout << "The entire block." << endl;
    for (int j=0; j < height; j++) {

        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}