//Another Brick in the Wall

#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

//Prototypes


int main() {
	int h,w,n;
	cin >> h;
	cin >> w;
	cin >> n;
	int arr[n];
	
	for(int i =0;cin>>arr[i];i++);
	
	int layer = 0;
	int sum = 0;
	for(int i = 0;i<n;i++){
		layer += arr[i];
		sum += arr[i];
		if(sum == h*w && layer == w){
			cout << "YES";
			return 0;
		}else if(layer == w){
			layer = 0;
		}else if(layer > w){
			cout << "NO";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}