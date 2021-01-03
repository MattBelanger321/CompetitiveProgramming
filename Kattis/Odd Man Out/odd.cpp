#include <iostream>
#include <cmath>
#include <iomanip>
#include <string.h>

using std::cin;
using std::cout;
//Prototypes

int contains(char arr[][1000][15],int i,int size,char* key,int from){
	if(strcmp(key,"-1") == 0){
		return -2;
	}
	for(int j = from+1;j<size;j++){
		if(strcmp(arr[i][j],key) == 0 && strcmp(arr[i][j],"-1") != 0){
			strcpy(arr[i][j],"-1");
			return j;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	int m;
	char arr[n][1000][15];
	for(int i = 0;cin >> m;i++){
		for(int j = 0;j<m;j++){
			cin >> arr[i][j];
		}
		for(int j = 0;j<m;j++){
			if(contains(arr,i,m,arr[i][j],j) == -1){
				cout << "Case #"<<i+1<<": "<<arr[i][j]<<"\n";
				break;
			}
		}
	}
	
	
}