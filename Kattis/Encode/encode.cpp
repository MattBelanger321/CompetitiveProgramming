#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;
//Prototypes

void encode(string str,int n){
	char line[n][n];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			line[j][n-i-1] = str[(n*i) + j];
		}
		cout << line[i];
	}
}

int main() {
	int n;
	cin >> n;
	string str;
	for(int i = 0;i<n;i++){
		cin >> str;
		encode(str,sqrt(str.length()));
		cout<<"\n";
	}
}