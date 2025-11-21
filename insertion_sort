#include<stdio.h>
/*insertion sort is a sorting technique where we select each element
and insert them in it's correct position*/
void insertionsort(int a[],int n){
	//start the loop with second element
	for(int i=1;i<n;i++){
		int j=i-1;
		int temp=a[i];
		//compare the elements with the elements before it and shift the greater elemennts to the right 
		while(j>=0&&a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		//insert the current element in it's position
		a[j+1]=temp;
	}
}
int main(){
	//size of array which needs to be sorted
	int n;
	scanf("%d",&n);
	int a[n];
	//get the elements of the array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sort the array using insertion sort
	insertionsort(a,n);
	//print the sorted array
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
//Time complexity O(Ne2)
//space complexity O(1) 
