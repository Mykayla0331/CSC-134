#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// Mykayla lewis
// 4/27/26
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  
};

int main() {
    cout << "Restaurant Reviews" << endl;
    // create one restaurant
    Restaurant rest1 = Restaurant("Mi casita", 4.0);
    cout << rest1.getName() << endl;
    cout << rest1.getRating() << endl;


    // maek another using user input
    Restaurant rest2 = Restaurant ("", 0.0);
    string n;
    double r;
    cout << "Enter Restaurant name: ";
    cin >> n;
    cout << "Rating (1.0 - 5.0): ";
    cin >> r;
    rest2.setName(n);
    rest2.setRating(r);
    cout << rest2.getName() << endl;
    cout << rest2.getRating() << endl;


    return 0;

}