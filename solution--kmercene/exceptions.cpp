#include <iostream>
#include <exception>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::exception;

int main(){
	int num, ans, Y, y, N, n;
	try{
		cout << "Welcome to the cheeseburgerz fast food drive-thru!" << endl;
		cout << endl;
		cout << "Please enter the number of beef patties you would like in your burger (1 or 2): ";
		cin >> num;
		cout << endl;
		if (num <= 0)
			throw num;
		if (num > 2){
		    cout << "Sorry. Our maximum amount of beef patties for one burger is 2." << endl;
    		return 0;
		}
		cout << "Would you like grilled onions? (Y/N) ";
		cin >> ans;
		
		if (ans == Y || y){
		    cout << "You ordered a cheeseburger of " << num << " beef patties with grilled onions." << endl;
		    cout << endl;
		}
		
		else if (ans == N || n){
		    cout << endl;
		    cout << "You ordered: a cheeseburger of " << num << " beef patties without grilled onions." << endl;
		    cout << endl;
		}
		
		else 
		    cout << "Sorry invalid answer. Please wait for assistance." << endl;
	}
	catch (const int num){
		cout << "The number you entered: '" << num << "' is invalid."
			<< "You need at least one patty for your cheeseburger!" << endl;
			return 0;
	}
	cout << "Please proceed to the next window to purchase your order. Thank you!" << endl;
	cout << endl;
	return 0;
}