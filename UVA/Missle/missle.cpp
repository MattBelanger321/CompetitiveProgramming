//Accepted
//Written by Ben Sutherland and Matt Belanger
//UVA Online Judge Problem #231

#include <iostream>
#define MAX 32767
using std::cin, std::cout, std::endl, std::cerr;

int maxVal(int arr[],int size){
	int max = arr[0];
	for(int i = 0; i<size;i++){
		max = arr[i] > max?arr[i]:max;
	}
	return max;
}

/*	
	This function will return the
	size of the largest sublist of 
	list that is in descending order
	
	input:
		max is an array of integers:
		
			for each 0<=i<size, 
			max[i] is the size of the largest sorted sublist of list that has list[i] as the head
		
		list an array of integers correspponding to the heights
		
	output:
			returns the size of the largest sorted sublist
		
*/
int maxIntercepts(int max[], int list[], int size) { //Recursize step
    if (size > 1) {
		maxIntercepts(max+1, list+1, size - 1);
        int tempMax = 0;
            
		//max val algorithm
		for (int i = 1; i < size; i++) {
            if (list[0] >= list[i]) {	//compares head to the other elements to see which lists the head can be appended too
				tempMax = max[i] > tempMax ? max[i] : tempMax;
            }
        }//end of max val
			
        max[0] = tempMax + 1;	//the head of list is appended to the largest sublist excluding the head
		return maxVal(max,size);	//if max is greater then max is the new longest sublist otherwise supermax is still the largest
    } else { //Base case
        max[0] = 1;
        return 1;
    }
}

int main() {
    int list[MAX];
	int max[MAX] = {0};
	int in = 0;
	int lsize = 0;
	for(int i = 0;i<MAX; i++){
		cin >> in;
		
		if(in == -1)
			break;
    if (i != 0) cout << "\n";
		cout << "Test #" << i+1 <<":\n";
		for(lsize = 0; lsize < MAX; lsize++){
			list[lsize] = in;
			cin >> in;
			if(in == -1){
				break;
			}
		}
		
		cout << "  maximum possible interceptions: " << maxIntercepts(max, list, ++lsize) << endl;
	}
}