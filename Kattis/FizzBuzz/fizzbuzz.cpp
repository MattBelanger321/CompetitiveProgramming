#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;

int main(){
	int x,y,n;
	cin >>x;
	cin >>y;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(i%x == 0){
			cout << "Fizz";
			if(i%y == 0)
				cout << "Buzz";
			cout<<'\n';
		}else if(i%y == 0){
			cout << "Buzz\n";
		}else{
			cout << i << '\n';
		}
	}
}