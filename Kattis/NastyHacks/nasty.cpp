//Sum kind of

#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	int n;
	cin >> n;
	int r,a,c;
	for(int i = 0;i<n;i++){
		cin >> r;
		cin >> a;
		cin >> c;
		if(r > (a-c)){
			cout << "do not advertise\n";
		}else if(r < (a-c)){
			cout << "advertise\n";
		}else{
			cout << "does not matter\n";
		}
	}
	
}