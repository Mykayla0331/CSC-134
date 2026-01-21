// CSC 134
// M1LAB1 - we're selling something
// Mykayla
// 1-21-2026

#include <iostream>
#include <iomanip> // for decimal places
using namespace std;

int main() {
    // declare my variables
    string item_name = "game catridge"; // item
    int item_count = 30; // in stock
    double item_cost = 59.99;  // price
    double total_cost; // total cost

    //set 2 decimal places.
    cout << setprecision(2) << fixed;

    // do the work
    cout << "Welcome to the " <<  item_name << " store." << endl;
    cout << "We have " << item_count << " " << item_name << "." << endl;
    cout << "They cost $" << item_cost << " each." << endl;

    // calculate the total price
    total_cost = item_count * item_cost;
    // print the total
    cout << "To buy all of them will cost $" << total_cost << "." << endl;

    return 0; 
}