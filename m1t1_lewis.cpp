// CSC 124
// M1T1 (Module 1, Tutorial 1)
// Hello, World!

// magic words
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl; // E N D L
    cout << "WHAT'SSSS GOOOOODDDDD!!!!" << endl;
    cout << endl; // another new line

    /*
    next we will:
    - make a variable (a noun) to store the user's name
    - ask them by the name
    - greet them by name
    */
    string name; // new "box" to hold a name in
    cout << "What's your name? ";
    cin >> name; // read in their answer
    // finally, say hi to them
    cout << "HAIIIIIIII, " << name << " >v<!!" << endl;

    return 0; // no errors
}