#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes
int num(int arr[],int size){
	int sum = 0;
	for(int i = 0;i<size;i++){
		sum+=arr[i]-1;
	}
	return sum+1;
}

int main() {
	int n;
	cin >> n;
	int m;
	for(int i = 0;i<n;i++){
		cin >> m;
		int arr[m];
		for(int j = 0;j<m;j++){
			cin >> arr[j];
		}
		cout << num(arr,m) << "\n";
	}
	
}