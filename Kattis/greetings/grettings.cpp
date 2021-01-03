#include <iostream>
#include <cmath>
#include <iomanip>


using std::cin;
using std::cout;
using std::string;
//Prototypes


int main() {
	string str;
	cin >> str;
	
	char out[2000];
	int j = 0;
	for(int i = 0;i<str.length();i++){
		if(str[i] == 'e'){
			out[j++] = 'e';
			out[j] = 'e';
		}else{
			out[j] = str[i];
		}
		j++;
	}
	out[j] = '\0';
	cout<<out;
}