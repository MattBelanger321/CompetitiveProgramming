#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using std::cin;
using std::cout;
using std::string;

//Prototypes
int main(){
    string str1,str2;
    cin >> str1;
	cin >> str2;
    if(str1.length() < str2.length())
		cout << "no";
	else
		cout << "go";
}