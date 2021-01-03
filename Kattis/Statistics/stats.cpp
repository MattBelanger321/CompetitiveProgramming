#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	int arr[30];
	int n;
	int max;
	int min;
	for(int j = 1;cin >> n;j++){
		cin >> arr[0];
		max = arr[0];
		min = arr[0];
		for(int i = 1;i<n;i++){
			cin >> arr[i];
			if(arr[i] > max)
				max = arr[i];
			if(arr[i] < min)
				min = arr[i];
		}
		cout << "Case "<<j<<": "<<min<<" "<<max<<" "<<max-min<<"\n";
	}
}