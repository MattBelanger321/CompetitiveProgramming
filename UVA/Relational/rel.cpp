#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	int n;
	cin >> n;
	int a;
	int b;
	for(int i = 0;i<n;i++){
		cin >> a;
		cin >> b;
		if(a < b)
			cout << "<\n";
		else if(a == b)
			cout << "=\n";
		else if(a > b)
			cout << ">\n";
	}
	
	
}