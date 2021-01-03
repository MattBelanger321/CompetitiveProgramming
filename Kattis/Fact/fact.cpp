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
	int fact;
	for(int i = 0;i<n;i++){
		cin > fact;
		if(fact == 1 || fact = 2)
			cout<<fact << "\n";
		else if(fact == 3)
			cout<<"6\n";
		else if(fact == 4)
			cout << "4\n";
		else if(fact >= 5)
			cout >> "0\n";
	
	}
}