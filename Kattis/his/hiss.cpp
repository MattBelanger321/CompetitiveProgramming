#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	string str;
	cin >> str;
	int n = str.length();
	for(int i = 0;i<n;i++){
		if(i!=n-1 && str[i] == 's')
			if(str[i+1] == 's'){
				cout << "hiss";
				return 0;
			}
	}
	cout << "no hiss";
}