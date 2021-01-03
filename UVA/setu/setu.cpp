#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	int n;
	string in;
	int don;
	int sum = 0;
	while(cin >> n){
		for(int i = 0; i < n;i++){
			cin >> in;
			if(in == "donate"){
				cin >> don;
				sum += don;
			}else if(in == "report")
				cout << sum << "\n";
		}
	}
}