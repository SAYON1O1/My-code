#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements in the list: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++)
          {
		scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n-1;
	int x;
	printf("Enter the element to be found: ");
	scanf("%d",&x);
	int mid=0;
	int count=1;
	while(low < high)
          {
 	       mid=(low+high)/2;
                 count=count+1;
		if(arr[mid]==x)
                    {
			printf("Element found at %d",mid);
			break;
		}
	       else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
      printf("\n the number of comparision is:%d", count);
	return 0;
}
