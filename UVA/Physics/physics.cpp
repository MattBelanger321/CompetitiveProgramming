#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	long long v;
	long long t;
	while(cin >> v && cin >> t){
		cout << v*t*2 << "\n";
	}
}