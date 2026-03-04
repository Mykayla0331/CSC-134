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

// grab user's present time
int highscore = 0;
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

    ///////////////////INTRO////////////////
    cout << "**********************" << endl;
    cout << "*GUESS THAT ANIMAL 🐅*" << endl;
    cout << "**********************" << endl;
    cout << " " << endl;
    cout << " ** You will have 15 seconds to guess the animal by the description given." << endl;
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
        int quizscore = 45;
        int seconds = 3;
        const int quizcount = 15;
        int questionsright= 0;
        int playerscore = 0;

        time_t startTime, endTime;
        double timeTaken;
        string answer;

        while (seconds >= 1) {
            cout << "READY IN: " << seconds << endl;
            this_thread::sleep_for(chrono::seconds(1));
            seconds--;
        }

        cout << " " << endl;
        cout << "GO!" << endl;
        cout << " " << endl;
        this_thread::sleep_for(chrono::seconds(2));

        // QUESTION 1
        cout << "************" << endl;
        cout << "*QUESTION 1*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a four-legged mammal often kept as a pet, I am often associated with bone and being dirty." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "dog"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a dog! 🐩" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        // QUESTION 2
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 2*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a small four-legged mammal often kept as a pet, I hunt small rodents and birds and am associated with Fish." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "cat"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a cat! 🐈" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        // QUESTION 3
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 3*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a huge mammal, living in the savannahs. I have grown a thick mane over time." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "lion"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a lion! 🦁" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }
//////////////////QUESTION 4

        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 4*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a fish who is commonly feared of by humans. Along with another sea creature, I'm most famous for my large dorsal fin." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Shark"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a Shark! 🦈" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

///////////////QUESTION 5
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 5*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am an 8-legged insect, I am famous for my detailed webs." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Spider"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a spider! 🕷️" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        /////////////QUESTION 6
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 6*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am an insect who fonds flowers. Usually, I am yellow and black in color." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Bee"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a bee! 🕷️" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        /////////QUESTION 7
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 8*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Much like my bee friend, I also am very fond of flowers. I come in many colors and humans believe I am the symbol of grace." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Butterfly"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a butterfly! 🦋" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        /////////////QUESTION 8
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 8*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I have a shell and am sometimes kept as pets. You may find me in a river or an ocean." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Turtle"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a turtle! 🐢" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        //////////////QUESTION 9 
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 9*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a marine creature with fewer than 8 tentacles. I spray ink when treatened." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Squid"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a squid! 🦑" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }

        ///////////////QUESTION 10
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 10*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a mammal of red and white colors. In media, I'm thought out to be cunning and sly." << endl;
        cout << " " << endl;
        cout << "What am I?" << endl;

        startTime = time(nullptr);
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        endTime = time(nullptr);
        timeTaken = difftime(endTime, startTime);

        if (timeTaken > quizcount) {
            cout << "TIME'S UP!" << endl;
        }
        else if (answer == "Fox"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a fox! 🦊" << endl;
            if (timeRemaining == 1){
                cout << quizscore << " pts. x " << timeRemaining << " second = " << endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            else{
                cout << quizscore << " pts. x " << timeRemaining << " seconds = " <<  endl;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << questionpoint << " pts." << endl;
        }


        // SCORES
        if (playerscore > highscore) {
            highscore = playerscore;
        }
        cout << "POINTS: " << playerscore << "" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "You scored: " << questionsright << "/21" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Your highscore is: " << highscore << " PTS. 🎉🎉"<< endl;

        this_thread::sleep_for(chrono::seconds(2));

        // end of game
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
            } else if (keepgoing == "yes" || keepgoing == "y") {
                cout << "Let's continue playing to get that highscore!" << endl;
                cout << " " << endl;
                break;
            } else {
                cout << "Not a valid input. Try typing \"yes\" or \"no\"!" << endl;
            }
        }
    }

    return 0;
}