#include <iostream>

using namespace std;

// m5t1 simple functions
// mykayla lewis
// 3/18/2026
// declare our functions
void say_hello();
int get_answer();
int double_a_num(int number);

//write main()
int main()
{
    say_hello();
    cout << "The answer is: " << get_answer() << endl;
    cout << "Type in an integer: ";
    int num;
    cin >> num;
    int answer = double_a_num(num);
    cout<< "Double that number is: " << answer << endl;
    return 0;
}
// define our functions (full code goes here)
void say_hello(){

    cout << "Hello world!" << endl;

}
int get_answer(){
    return 42;
}

int double_a_num(int number) {
        int answer = number * number;
        return answer;
}
