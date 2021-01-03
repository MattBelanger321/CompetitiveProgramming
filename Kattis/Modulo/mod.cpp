#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes

void addTo(int arr[],int key){
	static int j = 1;
	for(int i = 1;i<=10;i++){
		if(arr[i] == key)
			return;
	}
	arr[0]++;
	arr[j++] = key;
}

int main() {
	int nums[11];
	for(int i = 1;i<=10;i++)
		nums[i] = -1;
	nums[0] = 0;
	int n;
	for(int i = 0;i<10;i++){
		cin >> n;
		addTo(nums,n%42);
	}
	cout << nums[0];
}