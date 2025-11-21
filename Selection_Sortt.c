#include<stdio.h>
int main()
{
	//size of the array which needs to be sorted
	int n;
	scanf("%d",&n);
	int a[n];
	//get the elements of the array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//run two loops through the elements and find the minimum element and swap them
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
//time complexity:O(ne2)
//space complexity:O(1)
