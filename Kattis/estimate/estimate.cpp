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
	string a;
	for(int i = 0;i<n;i++){
		cin>>a;
		cout << a.length() << '\n';
	}
}