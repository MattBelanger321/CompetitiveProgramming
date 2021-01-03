//Not Accepted
//Written by Team 17
//Midterm Problem E'

#include <iostream>
#include <string.h>
#include <cmath>
#define MAX 32767
using std::cin, std::cout, std::endl, std::cerr,std::string;

void generateSequence(int d, string seq[],int size){
	
	if(d == 1){
		seq[1][0] = '1';
		return;
	}else{
		generateSequence(d-1,seq+1,size/2);
		if(d%2 == 0){
			for(int i = 0; i < size/2; i++){
				seq[i] = "1" + seq[size/2 + i];
			}
		}else{
			for(int i = 0; i < size/2; i++){
				seq[i] = "0" + seq[size/2 + i];
			}
		}
		return;
	}
}

int soln(int d, string start, string end){
	int size = int(pow(2,d));
	string seq[size];
	
	
	
	generateSequence(d,seq,size);
	
	int s = 0; //index that start appears
	int e = 0;	//index that end appears
	for(int i = 0;i<size;i++){
		if(seq[i].compare(start) == 0){
			s = i;
		}
		if(seq[i].compare(end) == 0){
			e = i;
			break;
		}
	}
	return e-s-1;
}

int main(){
	int d;	//dimension of the cube
	string start;	//head of the path
	string end;	//tail of the path
	
	cin >> d;
	cin >> start;
	cin >> end;
	
	cout << soln(d,start,end);
}