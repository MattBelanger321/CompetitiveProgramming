//Beavergnaw

#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin, std::cout;

//Prototypes
double calcInner(int D,int V);


int main() {
	int D = 0;
	int V = 0;
	
	while(cin >> D && cin >> V){	//program runs until input is done
		if(D == 0)
			break;
		
		cout << std::setprecision(12) << calcInner(D,V) << '\n';
	}
}

double calcInner(int D,int V){
	double pi = 2*acos(0.0);
	return cbrt( (pi*pow(D,3) - 4*V )/pi);
}