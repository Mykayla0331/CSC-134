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
#include <cmath>
#include <vector>


using namespace std;
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
    int highscore = 0;
    int playerscore = 0;
    int correctquiz = 0;
    string answer;
    bool gamerun = true;
    string keepgoing;
    ///////////////////INTRO////////////////
    cout << "**********************" << endl;
    cout << "*GUESS THAT ANIMAL🐅*" << endl;
    cout << "**********************" << endl;
    cout << " " << endl;
    cout << " ** You will have 25 seconds to guess the animal by the description given." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** If you get one wrong, the quiz will still continue" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** The faster you answer, the more points you will recieve." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** There are 21 questions in total." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** Replay over and over again for a new highscore!" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " " << endl;


    while (gamerun) {
     // declare variable
    int quizscore = 20;
    int seconds = 3;
    const int quizcount = 25;

    while (seconds >= 1) {
        cout << "READY IN: " << seconds << endl;

    this_thread::sleep_for(chrono::seconds(1));

    seconds--;
    }

    cout << " " << endl;
    cout << "GO!" << endl;
    cout << " " << endl;
      this_thread::sleep_for(chrono::seconds(2));
    cout << "************" << endl;
    cout << "*QUESTION 1*" << endl;
    cout << "************" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "I am a four-legged mammal often kept as a pet, I am often associated with bone and being dirty." << endl;
    cout << " " << endl;
    cout << "What am I?" << endl;
    cin >> answer;
    if (    )


    if (playerscore > highscore) {
        highscore = playerscore;
    }
        cout << "POINTS: " << playerscore << "" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "You scored: " << correctquiz << "/21!! " << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Your highscore is: " << highscore << " PTS. 🎉🎉"<< endl;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    this_thread::sleep_for(chrono::seconds(2));
           // end of game
           // convert letters into lower case
        transform(keepgoing.begin(), keepgoing.end(), keepgoing.begin(), ::tolower);

        while (true){
            cout << " " << endl;
            cout << "Would you like to play again?" << endl;
            cin >> keepgoing;

        if (keepgoing == "no" || keepgoing == "n") {
            cout << " " << endl;
            cout << "Thank you for playing!" << endl;
            cout << " " << endl;
            gamerun = false; // ends game
            break; // ends first loop

        }  else if (keepgoing == "yes" || keepgoing == "y") {
            cout << "Let's continue playing to get that highscore!" << endl;
            cout << " " << endl;
            break;

        }  else {
            cout << "Not a valid input. Try typing \"yes\" or \"no\"!" << endl;
        }
        }

        }
    


 
    return(0);
}