//Not Accepted
//Written by Ben Sutherland and Matt Belanger
//UVA Online Judge Problem #10627

#include <iostream>
using std::cin, std::cout, std::endl, std::cerr;

int calcPasses(int l,int r1,int r2,int t){
	cout << l <<'\t' << r1 <<'\t' << r2 <<'\t' << t <<'\n';
	int RATIO;
	RATIO = r1/r2;
	int SLI; //Slow Lap Intersections
	int slowLaps = (r2*t)/l;
	
	if(r2*RATIO == r1 && RATIO%2 == 0){
		SLI = r1/r2;
		return SLI*slowLaps - slowLaps/2;
	}else{
		SLI = r1/r2;
		return SLI*slowLaps;
	}
	
	
	
	return SLI*slowLaps;
}

int main() {
	int l = -1;
	int r1 = -1;
	int r2 = -1;
	int t = -1;
	int passes = -1;
	int presentationFlag = 1; //set if on first iteration
	while(true){
		cin >> l;
		cin >> r1;
		cin >> r2;
		cin >> t;
		
		if(presentationFlag){
			presentationFlag = !presentationFlag;
		}else{
			cout << '\n';
		}
			
		if(l == 0){
			break;
		}
		
		passes = calcPasses(l,r1,r2,t);
		
		cout << passes;
	}
}