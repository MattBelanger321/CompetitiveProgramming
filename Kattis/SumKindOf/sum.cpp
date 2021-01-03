//Sum kind of

#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	int p;
	cin >> p;
	int arr[p][2];
	
	int k;
	
	for(int i = 0;cin >> arr[i][0] && cin >> arr[i][1];i++){
		cout << i+1;
		cout << " ";
		cout << (arr[i][1] * (arr[i][1]+1))/2;
		cout << " ";
		cout << arr[i][1]*arr[i][1];
		cout << " ";
		cout << arr[i][1]*arr[i][1] + arr[i][1];
		cout << '\n';
		
	}
	
}