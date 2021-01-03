#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	int n;
	int speed;
	int time;
	int last;
	int sum;
	cin >> n;
	do{
		sum = 0;
		last = 0;
		for(int i = 0;i<n;i++){
			cin >> speed;
			cin >> time;
			sum+=speed*(time-last);
			last = time;
		}
		cout << sum << " miles\n";
		cin >> n;
	}while(n != -1);
}