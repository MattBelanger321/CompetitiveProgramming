#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

int main(){
	int n;
	cin >> n;
	int j;
	for(int i = 0;i<n;i++){
		cin >> j;
		cout << j <<" is ";
		if(j<0)
			j = -1*j;
		if(j%2 == 0){
			cout << "even\n";
		}else if(j%2 == 1){
			cout << "odd\n";
		}
	}
}