#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;

//Prototypes


int main() {
	int R;
	int C;
	cin >> R;
	cin >> C;
	
	cout <<std::setprecision(30) << 100*(R-C)*(R-C)/(float)(R*R);
}
