#include<stdio.h>
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
	/*run two loops through the array and if the smaller element is fount before a bigger
	element swap them in each iteration the largest element will come to it's place*/
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
//time complexity:O(ne2)
//space complexity:O(1)
