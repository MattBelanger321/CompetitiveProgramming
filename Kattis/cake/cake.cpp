#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	int n;
	int h;
	int v;
	cin >> n;
	cin >> h;
	cin >> v;
	if(h < n-h)
		h = n-h;
	if(v < n-v)
		v = n-v;
		
	cout << v*h*4;
}