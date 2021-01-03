//Not Accepted
//Written by Ben Sutherland and Matt Belanger
//UVA Online Judge Problem #1709 

#include <iostream>
#include <cmath>
#include <iomanip>

#define MAX 32767
using std::cin, std::cout, std::endl, std::cerr;

//price(k) = p · (sin(a · k + b) + cos(c · k + d) + 2)
double price(int p,int a,int b,int c,int d, int k){
	return p*(sin( (a*k) +b) + cos( (c*k) + d) + 2);
}

int main() {
	int n = 0;
	int p = 0;
	int a = 0;
	int b = 0;
	int c = 0; 
	int d = 0;
	
	double localMax = 0;
	double curr;
	
	double maxDrop = 0;
	while(cin >> p){
		maxDrop = 0;	//the largest drop in the market on the interval
		localMax = 0;	//the price where the market starts to decline
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> n;
		for( int i = 1;i<=n;i++){
			curr = price(p,a,b,c,d,i);
			if(curr >= localMax){
				localMax = curr;	//if the market recovered (or is increasing) then reset the max
			}else if(localMax - curr > maxDrop){
				maxDrop = localMax - curr;	//if the diffrence of the localMax and the current price is larger then the current largest drop then update the largest drop
			}
		}
		if(maxDrop == 0){
			cout << "0.00" << '\n';
		}else{
			cout << std::setprecision(12) << maxDrop << '\n';
		}
	}
}