#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	double d;
	cin >> d;
	
	cout << std::setprecision(15) << pow(10,log10(d)/d);
}