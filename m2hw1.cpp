// CSC 134
// M2HW - GOLD
// 3.2.26
// MYKAYLA LEWIS

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// declare variables
string response;
string username, account, deposit, withdrawal, finalaccount;
int roll(20);

double pizzas, slices, total_pizzas, leftovers, visitor_ate, visitors;


int main() {

  srand((unsigned) time(NULL))

  int  % 10; 

    cout << " " << endl;
    cout << "************" << endl;
    cout << "*QUESTION 1*" << endl;
    cout << "************" << endl;
    cout << "BANKING TRANSACTIONS" << endl;
    cout << " " << endl;

    // user's info
    cout << "ENTER YOUR NAME:" << endl;
    cin >> username;
    cout << "ENTER CURRENT ACCOUNT BALANCE:" << endl;
    cin >> account;
    cout >> "ENTER AMOUNT OF DEPOSIT:" << endl;
    cin << deposit;
    cout >> "ENTER AMOUNT OF WITHDRAWAL:" << endl;
    cin << withdrawal;

  // math
    finalaccount = account + deposit - withdrawal;

  // print
    cout << "TRANSACTION COMPLETE:" << endl;
    cout << "NAME: " << username << endl;
    cout << "ACC NO. " << accountno << endl;

    cout << " " << endl;
    cout << "************" << endl;
    cout << "*QUESTION 2*" << endl;
    cout << "************" << endl;
    cout << "GENERAL CRATES" << endl;
    cout << " " << endl;
      // part 1 -- declare variables

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    // crate variables
    double length, width, height, volume;
    
    // money variables
    double cost, customer_price, profit;

    // part 2 -- get the input
    cout << "Welcome to General Crates." << endl;
    cout << "Please enter the crate dimensions." << endl;

    cout << "Crate length? ";
    cin >> length;
    cout << "Crate width? ";
    cin >> width;
    cout << "Crate height? ";
    cin >> height;

    // part 3 -- do the calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    customer_price = volume * CHARGE_PER_CUBIC_FOOT;
    profit = customer_price - cost;

    // part 4 -- print the output
    cout << setprecision(2) << fixed;
    cout << "Volume is " << volume << " cubic feet." << endl;
    cout << "Volume is " << volume << " cubic feet." << endl;
    cout << "Wholesale price is $" << customer_price << endl;
    cout << "Profit per crate:  $" << profit << endl;
    cout << " " << endl;
    cout << "Type anything then press enter for next question ! " << endl;
    cin >> response;
    // question two
    cout << " " << endl;
    cout << "************" << endl;
    cout << "*QUESTION 3*" << endl;
    cout << "************" << endl;
    cout << "PIZZA PARTY" << endl;
    cout << " " << endl;
    cout << "Welcome to Jimmy John's Pizza's Party Program!! To begin, start by entering the amount of people attending the party.";
    cin >> visitors; 
    cout << "Now enter how many whole pizzas you will be ordering." << endl;
    cin >> pizzas;
    cout << "Lastly, enter how many slices you'll have per whole pizza." << endl;
    cin >> slices;

    // math
    total_pizzas = pizzas * slices;
    visitor_ate = visitors * 3;
    leftovers = total_pizzas - visitor_ate;

    // print
    cout << "For " << visitors << " visitors, ordering " << pizzas << " pizzas with " << slices << " slices each, you will have a total of " << total_pizzas << " slices altogether. And with each guest having 3 slices each," << endl;
    cout << "that'd leave " << leftovers << " pizza slices left over." << endl;

    cout << " " << endl;
    cout << "Type anything then press enter for next question ! " << endl;
    cin >> response;
    cout << " " << endl;
    cout << "************" << endl;
    cout << "*QUESTION 4*" << endl;
    cout << "************" << endl;
    cout << "FTCC CHEER" << endl;
    cout << " " << endl;

    // declare variables
    string school = "FTCC";
    string team = "Trojans";
    string letsGo = "Let's go";
    string cheer1 = letsGo + " " + school; 
    string cheer2 = letsGo + " " + team;

    cout << cheer1 << endl;
    cout << cheer1 << endl;
    cout << cheer1 << endl;
    cout << cheer2 << endl;

    
    return 0;
}