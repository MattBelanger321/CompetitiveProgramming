//Not Accepted
//Written by Matt Belanger
//Kattis Problem Smart Phone

#include <iostream>
#include <string.h>
#define MAX 32767
using std::cin, std::cout, std::endl, std::cerr,std::string;

int minimizeKeypresses(string target,string curr,string sug[]){
	
	return 0;
}

int main(){
	int T;	//cases
	cin >> T;
	
	string target;	//The word you want to type.
	string curr;	//What has been written so far.
	string sug[3];	//suggestions
	
	for(int i = 0;i<T;i++){
		if(i != 0){
			cout << '\n';
		}
		cin >> target;
		cin >> curr;
		cin >> sug[0];
		cin >> sug[1];
		cin >> sug[2];
		
		cout << minimizeKeypresses(target,curr,sug);
	}
}
