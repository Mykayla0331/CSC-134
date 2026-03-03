// CSC 134
// M3BONUS 
// 3.2.26
// MYKAYLA LEWIS

#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>
#include <algorithm>


using namespace std;
// grab user's present time
string timenow()
{
    time_t tt;

    struct tm* st;

    //current time
    time(&tt);
    // turn it into local time
    st = localtime(&tt);
    return asctime(st);
}

int main(){
    bool gamerun = true;
    string keepgoing;
    
    cout << "**********************" << endl;
    cout << "*GUESS THAT ANIMAL🐅*" << endl;
    cout << "**********************" << endl;
    cout << " " << endl;
    cout << " ** you will have 25 seconds to guess the animal by the description given." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** If you get one wrong, the quiz will still continue" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** Replay over and over again for a new highscore!" << endl;
    this_thread::sleep_for(chrono::seconds(2));


    while (gamerun) {
     // declare variable
    int seconds = 3;
    int quizcount = 25;

    while (seconds >= 1) {
        cout << "READY IN: " << seconds << endl;

    this_thread::sleep_for(chrono::seconds(1));

    seconds--;
    }
    cout << "GO!" << endl;
        
    
           // end of game
           transform(keepgoing.begin(), keepgoing.end(), keepgoing.begin(), ::tolower);
        cout << "would you like to play again?" << endl;
        cin >> keepgoing;
        if (keepgoing == "no" || keepgoing == "n") {
        cout << "Thank you for playing!" << endl;
        keepgoing = false;
        }  else if (keepgoing == "yes" || keepgoing == "y") {
        cout << "Let's continue playing to get that highscore!" << endl;
        }  else {
        cout << "Not a valid input. Try typing \"yes\" or \"no\"!" << endl;
        }
    }


 
    return(0);
}