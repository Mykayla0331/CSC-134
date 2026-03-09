// CSC 134
// M3HW1 - GOLD
// 3.9.26
// MYKAYLA LEWIS

#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();
string response;

// main
int main() {
    cout << "Example of HW" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "0. Exit" << endl;
    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
    else if (3==choice) {
        question3();
    }
    else if (4==choice) {
        question4();
    }
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}

// Function definitions
// Like a dictionary -- name, and then all the code
void question1() {
    int age = 25;
    cout << "C++: \"Do you love me?\"" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "C++ seems happy" << endl;
    } 
    else if (response == "no") {
        cout << "C++ seems upset." << endl;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    cout << "C++: \"Do you need me?\"" << endl;
    cin >> response;
    if (response == "yes"){
    cout << "C++ is extremely happy!" << endl;
    }
        else if (response == "no") {
        cout << "C++ seems extremely upset." << endl;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
}

void question2() {
    int age = 30;
    cout << "Question 2 goes here" << endl;
}

void question3() {
    int age = 35;
    cout << "Question 3 goes here" << endl;
}

void question4() {
    int age = 40;
    cout << "Question 4 goes here" << endl;
}