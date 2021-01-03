#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	int n;
	cin >>n;
	int sum = 0;
	int a;
	for(int i = 0;i<n;i++){
		cin >> a;
		if(a<0){
			sum += abs(a);
		}
	}
	cout << sum;
}