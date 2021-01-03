#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <cmath>

#define MAX 4

//Prototypes


using namespace std;
int main(){
	int i[MAX]; //holds the values of i
	int j[MAX];	//holds the values of j
	int maxs[MAX];	//holds the maxiumn cycle length on the corresponding [i,j] interval
	
	for(int a = 0; a < MAX; a++){
		cin >> i[a];
		cin >> j[a];
	}
	
	for(int a = 0; a < MAX; a++){
		cout << i[a] << ' ';
		cout << j[a] << '\n';
	}
}