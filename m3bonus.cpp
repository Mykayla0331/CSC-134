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
    cout << " ** Anwser by typing the animal and the animal only." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** If you get one wrong, the quiz will still continue" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** The faster you answer, the more points you will recieve." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << " ** There are 25 questions in total." << endl;
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
        else if (answer == "shark"){
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
        else if (answer == "spider"){
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
        else if (answer == "bee"){
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
        else if (answer == "butterfly"){
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
        else if (answer == "turtle"){
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
        else if (answer == "squid"){
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
        else if (answer == "fox"){
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

        ///////////////QUESTION 11
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 11*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a big black-and-white mammal who eats bamboo." << endl;
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
        else if (answer == "panda" || answer == "panda bear"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a panda! 🐼" << endl;
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

                ///////////////QUESTION 12
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 12*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a well-known low-energy mammal who munch on eucalyptus leaves" << endl;
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
        else if (answer == "koala"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a koala! 🐨" << endl;
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

                ///////////////QUESTION 13
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 13*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a huge white mammal living in arctic environment. I am known for being wildly aggressive." << endl;
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
        else if (answer == "polar bear"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a polar bear! 🐻‍❄️" << endl;
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

                ///////////////QUESTION 14
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 14*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "You can find me on a farm, usually blotched. Farmers keep me for milk." << endl;
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
        else if (answer == "cow"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a cow! 🐄" << endl;
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

                ///////////////QUESTION 16
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 16*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am considered soft and wooly and I go \"Baa\"." << endl;
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
        else if (answer == "sheep"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a sheep! 🐑" << endl;
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

                ///////////////QUESTION 17
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 17*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a horned and hooved mammal. I am known for eating just about anything." << endl;
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
        else if (answer == "goat"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a goat! 🐐" << endl;
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

                ///////////////QUESTION 18
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 18*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a desert mammal who's known for storing water in a \"hump\"." << endl;
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
        else if (answer == "camel"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a camel! 🐫" << endl;
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

                ///////////////QUESTION 19
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 19*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a ridden animal that's very powerful." << endl;
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
        else if (answer == "horse"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a horse! 🐎" << endl;
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

                ///////////////QUESTION 20
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 20*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am typically a tiny mammal with long ears and a short tail. I am associated with carrots" << endl;
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
        else if (answer == "rabbit" || answer == "bunny"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a rabbit! 🐇" << endl;
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

                ///////////////QUESTION 21
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 21*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I'm usually a small grey and dark-grey mammal, known as a \"trash panda\"." << endl;
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
        else if (answer == "raccoon"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a raccoon! 🦝" << endl;
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

                ///////////////QUESTION 22
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 22*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a social apex predator, I work in packs in a forest." << endl;
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
        else if (answer == "wolf"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a wolf! 🐺" << endl;
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

                ///////////////QUESTION 23
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 23*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am white with black stripes commonly theorized to repel insects. I live in the savanna." << endl;
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
        else if (answer == "zebra"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a zebra! 🦓" << endl;
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

                ///////////////QUESTION 24
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 24*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a white waterfowl noted for having only one mate for life." << endl;
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
        else if (answer == "swan"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm a swan! 🦢" << endl;
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

                ///////////////QUESTION 25
        this_thread::sleep_for(chrono::seconds(2));
        cout << "************" << endl;
        cout << "*QUESTION 25*" << endl;
        cout << "************" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I am a large mammal living in the savanna. Humans hunt me for my tusks." << endl;
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
        else if (answer == "elephant"){
            double timeRemaining = max(0.0, quizcount -timeTaken);
            int multiplier = floor(timeRemaining);
            int questionpoint = quizscore * multiplier;
            playerscore += questionpoint;
            questionsright += 1;
            cout << "Correct! I'm an elephant! 🐘" << endl;
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