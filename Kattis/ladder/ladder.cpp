
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;

//Prototypes


int main() {
	int h;
	int v;
	cin>>h;
	cin>>v;
	
	cout << ceil(h/sin(v*(3.14159265359/180)));
}