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
	float div = n;
	int sum = 0;
	int j;
	for(int i = 0;i<n;i++){
		cin >> j;
		if(j<0){
			div--;
		}else{
			sum+=j;
		}
	}
	cout << std::setprecision(15)<<sum/div;
}