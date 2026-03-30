// M4HW
// silver
// 3-30-26
// mykayla lewis

#include <iostream>
using namespace std;

int main() {

    // declare variables
    int firstnum, secondnum, answer;
    answer = firstnum * secondnum;

    cout << "Insert the first number, 1-12. ";
    cin >> firstnum;

    for (int i=1; i<=12; i++) {
        answer = firstnum * i;
        cout << firstnum << " times " << i << " is " << answer << endl;
    }
}