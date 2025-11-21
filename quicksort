#include<stdio.h>
/* quick sort is a sorting technique where we take an element as a pivot element and place the
elements smaller than it to it's left and elements greater than it to it's right*/
int Partition(int A[],int key,int start,int end){
	int s=start;
	int e=end;
	while(s<e){
		//find the number greater than pivot number
		while(A[s]<=key){
			s++;
		}
		//find the number less than pivot number 
		while(A[e]>key){
			e--;
		}
		if(s<e){
			//swap the two numbers 
			int temp=A[s];
			A[s]=A[e];
			A[e]=temp;
		}
	}
	//swap the pivot number with the number present at it's index 
	int temp=A[e];
	A[e]=key;
	A[start]=temp;
	return e;
}
void QuickSort(int A[],int start,int end){
	if(start<end){
		//set the first number as the pivot number
		int p=A[start];
		//place the smaller numbers less than pivot to it's left and larger numbers to it's right
		p=Partition(A,p,start,end);
		//sort the left part using recursion call
		QuickSort(A,start,p-1);
		//sort the right part using recursion call
		QuickSort(A,p+1,end);
	}
}
int main(){
	//size of the array which is needed to be sorted
	int n;
	scanf("%d",&n);
	int A[n];
	//getting the elements of the array
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	//sorting the array using quick sort
	QuickSort(A,0,n-1);
	//printing the sorted array
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
	}
	return 0;
}
/*time complexity
average case: O(nlogn)
worst case: O(ne2) */
//space complexity:O(n)
