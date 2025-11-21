#include<stdio.h>
/*radix sort is a sorting technique where we use a 2d array to separating the elements based on
the digits at the place values and deconstructing them*/


//find the maximum element of the array
 int getmax(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
void radixsort(int a[],int n){
	int m=getmax(a,n);
	//create a 2d array to segregate the elements based on their digits according to their place values
	int buckets[10][n];
	while(m){
		int e=1;
		int count[10]={0};
		for(int i=0;i<n;i++){
			int pos=(a[i]/e)%10;
			buckets[pos][count[pos]]=a[i];
			count[pos]++;
		}
		//reconstruction
		  int c=0;
		  for(int i=0;i<10;i++){
		  	for(int j=0;j<count[i];j++){
		  		a[c]=buckets[i][j];
		  		c+=1; 
			  }
		  }
		m/=10;
		e*=10;
	}
}
int main()
{
	//size of the array
	int n;
	scanf("%d",&n);
	int a[n];
	//get the elements of the array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sort array using radix sort
	radixsort(a,n);
	//print the sorted array
	print(a,n);	  
}
//time complexity: O(n*k)  k=number of digits in the number
//space complexity: O(n+k)
