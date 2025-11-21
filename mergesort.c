#include<stdio.h>
void merge(int a[],int start,int mid,int end,int n){
	int i=start;
	int j=mid+1;
	//declare another array to store the elements in their correct positions
	int b[end-start+1];
	int k=0;
	while(i<=mid&&j<=end){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=end){
		b[k++]=a[j++];
	}
	k=0;
	for(int i=start;i<=end;i++){
		a[i]=b[k++];
		
	}
}
void mergesort(int a[],int n,int left,int right){
	//base case
	if(left>=right){
		return;
	}
	//find mid and separate into two parts
	int mid=(left+right)/2;
	//sort the left part using recursive call
	mergesort(a,n,left,mid);
	//sort the right part usinng recursive call
	mergesort(a,n,mid+1,right);
	//merge the two parts
	merge(a,left,mid,right,n);
}
int main(){
	//size of array that needs to be sorted
	int n;
	scanf("%d",&n);
	int a[n];
	//get the elements of the array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sort array using merge sort
	mergesort(a,n,0,n-1);
	//print the sorted array
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
}
//time complexity:O(nlogn)
//space complexity:O(n)
