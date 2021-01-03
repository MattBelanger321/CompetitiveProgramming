//Overflow Addition

#include <iostream>
#include <cmath>
#include <iomanip>
#define MAX 10001

using std::cin;
using std::string;
using std::cout;
using std::cerr;

//Prototypes


// Function to reverse a string 
string reverseStr(string str) { 
    int n = str.length(); 
	char temp;
    // Swap character starting from either end
    for (int i = 0; i < n / 2; i++) {
		temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
	
	return str;
} 

char* reverseCharArr(char* str,int n) { 
	char temp;
    // Swap character starting from either end
    for (int i = 0; i < n / 2; i++) {
		temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
	
	return str;
} 

string bigAdd(string a,string b){
	int aLarger = a.length() >= b.length();	//set if a has more digits than b
	char sum[(aLarger?a.length():b.length())];
	sum[0] = (48+((a[0]+ b[0] -96)%10));
	int carry = (a[0] + b[0]-96)/10;	//set if the sum of a[i]+b[i] is greater than 10
	int i;
	
	for(i = 1; i < (aLarger?b.length():a.length()); i++){
		sum[i] = 48+(a[i] + b[i] - 96 + carry)%10;
		carry = (a[i]+ b[i]-96 + carry)/10;
	}
	
	while(i < (!aLarger?b.length():a.length())){
		if(aLarger){
			sum[i] = (48+((a[i]-48 + carry)%10));
			carry = (a[i]-48 + carry)/10;
		}else{
			sum[i] = (48+((b[i]-48 + carry)%10));
			carry = (b[i]-48 + carry)/10;
		}
		i++;
	}
	if(carry != 0)
		sum[i++] = carry + 48;
	
	sum[i] = '\0';
	return reverseCharArr(sum,i);
}

int main() {
	string a;
	string b;
	
	while(cin >> a && cin >> b){	//program runs until input is done
		string sum = bigAdd(reverseStr(a),reverseStr(b));
		cout << sum << '\n';
	}
}