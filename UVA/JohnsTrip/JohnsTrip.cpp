#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <cmath>
#include <bits/stdc++.h> 

#define STREET_MAX 1995
#define JUNCTION_MAX 44

//structs
struct vertex{ 
    int val = 0;	//name of this junction
	int degree;	//number of streets connected to this junction
	int incidencents[1995];	//list of streets connected to this junction (by value) 
}typedef Vertex;

struct edge{ 
    int val;	//name of this street
	Vertex* head;	//first junction connected to this street
	Vertex* tail;	//second junction connected to this street
}typedef Edge;

//Prototypes
int findCircuit(Vertex v,Edge* edgeSet,int* circuit,int count,int size);
void quickSort(int arr[], int low, int high);
void sortIncidence(Vertex vertexSet[],int size);
int partition (int arr[], int low, int high);
void swap(int* a, int* b);
int contains(int haystack[],int needle,int size);
void sortEdges(Edge *edges,int size);


using namespace std;
int main(){
	
	int juncCount = 0;
	int x = -1,y = -1,z;	//temp variables for the given 2 junctions and street on the line
	for(int i = 0;1;i++){
		Vertex vertexSet[JUNCTION_MAX];
		Edge edgeSet[STREET_MAX];
		int j = 0;
		for(j = 0;1;j++){
			cin >> x;
			cin >> y;
			
			if(x == y && y == 0){	//checks terminatiion condiition
				if(!j)
					exit(0);
				else
					break;
			}
			
			cin >> z;
			
			
			if(!vertexSet[x-1].val){	//determines if this junction has been declared
				Vertex temp;
				temp.val = x;
				temp.degree = 1;
				vertexSet[x-1] = temp;
				juncCount++;
			}else{	//if it has been declared this means the degree increases by 1
				vertexSet[x-1].degree++;
			}
			
			vertexSet[x-1].incidencents[vertexSet[x-1].degree-1] = z;	//adds the incident street to the list of incident streets
			
			if(!vertexSet[y-1].val){	//determines if this junction has been declared
				Vertex temp;
				temp.val = y;
				temp.degree = 1;
				vertexSet[y-1] = temp;
				juncCount++;
			}else{	//if it has been declared this means the degree increases by 1
				vertexSet[y-1].degree++;
			}
			
			vertexSet[y-1].incidencents[vertexSet[y-1].degree-1] = z;	//adds the incident street to the list of incident streets
			
			Edge temp;	//adds a street
			temp.val = z;
			temp.head = &vertexSet[x-1];
			temp.tail = &vertexSet[y-1];
			
			edgeSet[z-1] = temp;
		}
		int dneFlag = 0;
		
		for(int a = 0; a <juncCount; a++){
			if(vertexSet[a].degree % 2 == 1){	//a graph has an euler trail <=> it has no vertex of odd degree (lemma 13.1.1 pg 253 2310 courseware)
				if(i!=0)
					cout<<'\n';
				cout << "Round trip does not exist.\n";
				dneFlag = 1;
				break;
			}
		}
		if(!dneFlag){
			sortIncidence(vertexSet,juncCount);	//quicksort implementation each incidence array
			
			for(int a = 0;a <  
			
			int circuit[j];
			if(findCircuit(vertexSet[0],edgeSet,circuit,0,j)){	//will find the smallest (lexigraphically) euler circuit of a given graph
				if(i!=0)
					cout<<'\n';
				for(int a = 0;a<j;a++){
					cout << circuit[a] << ' ';
				}
				cout << "\n";
			}
		}
		
		
		juncCount = 0;	//resets juncCount for the next iteration
	}
}


//This function will find the smallest (lexigraphically) euler circuit of a given graph
//Assumes this graph has an euler circuit and the incidence arrays are sorted
//Input: the Vertex Set and Edge Set of the graph in question and the size of the Edge Set
//Output: 1 if path was found succesfully 0 otherwise
int findCircuit(Vertex v,Edge* edgeSet,int* circuit,int count,int size){
	int flag = 0;	//1 if tested path was successful 0 if another path is needed
	if(count == size)
		return 1;
	for(int i = 0;i < v.degree;i++){
		if(!contains(circuit,v.incidencents[i],size)){
			circuit[count] = v.incidencents[i];
			
			Vertex temp = edgeSet[circuit[count]-1].head->val == v.val ? *edgeSet[circuit[count]-1].tail : *edgeSet[circuit[count]-1].head;
			flag = findCircuit(temp,edgeSet,circuit,count+1,size);
		}
		if(flag){
			return 1;
		}
	}
	//if program gets here we found an invalid path so we need to reverse
	return 0;
	
}

void sortEdges(Edge *edges,int size){
	Edge temp;
	for(int i = 0;i<size-1;i++){
		if(edges[i].val > edges[i+1].val){
			temp = edges[i];
			edges[i] = edges[i+1];
			edges[i+1] = temp;
			i = -1;
		}
	}
}

//returns 1 if needle is found 0 otherwise
int contains(int haystack[],int needle,int size){
	for(int i = 0; i < size; i++){
		if(haystack[i] == needle)
			return 1;
	}
	return 0;
}

// A utility function to swap two elements  
void swap(int* a, int* b){  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int high){  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot){  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

void sortIncidence(Vertex vertexSet[],int size){
	for(int i = 0; i< size; i++){
		quickSort(vertexSet[i].incidencents,0,vertexSet[i].degree - 1);
	}
}
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high){  
    if (low < high){  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

