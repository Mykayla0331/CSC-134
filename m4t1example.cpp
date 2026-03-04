// csc 134
// 3.4.26
//m4t1
//mykayla

#include <iostream>
using namespace std;

int main() {
    int i = 10;
    while (i > 0) {
        i--; // subtract one
        cout << 1 << " ";
    }

cout << "done" << endl;

cout << "Part 3: the table" << endl;
const int MIN = 1;
const int MAX = 10;

int num = MIN;
int squared;
cout << "Number\t\tNumber Squared\n";
cout << "--------------------------------" << endl;
while (num <= MAX) {
    squared = num*num;
    cout << num << "\t" << squared << endl;
    num++;
    } 
}