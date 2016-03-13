#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void greeting();

template <typename T>

void swap(T &b, T &l)
{
	T tmp = b;
	b = l;
	l = tmp;
}

class Random{
	private:
		string bead;
	public:
		void greeting();
};
void greeting(){
	cout << "Welcome to the learning math game program. "
		<< "This program is designed to swap numbers." << endl;
}
int main(){
	int a, b, z;
	cout << "Please enter two numbers: ";
	cin >> a >> b;
	cout << endl;
	swap(a, b);
	cout << "While swapping these numbers we will add them together for a total sum.";
	cout << "a is now equal to: " << a << " and b is now equal to: " << b << "." << endl;

	a + b = z;
	cout << "When you add the two numbers you get a sum of: " << z;

	return 0;
}