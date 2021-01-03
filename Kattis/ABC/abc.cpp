#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	int arr[3];
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	int temp;
	
	if(arr[0] > arr[1]){
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	
	if(arr[2] < arr[0]){
		temp = arr[2];
		arr[2] = arr[0];
		arr[0] = temp;
	}
		
	if(arr[2] < arr[1]){
		temp = arr[2];
		arr[2] = arr[1];
		arr[1] = temp;
	}
	string s;
	cin >> s;
	for(int i = 0;i<3;i++){
		if(s[i] == 'A'){
			cout << arr[0];
		}else if(s[i] == 'B'){
			cout << arr[1];
		}else if(s[i] == 'C'){
			cout << arr[2];
		}
		cout << (i==2?'\0':' ');
	}
}