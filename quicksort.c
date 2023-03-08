#include<stdio.h>
void swap(int arr[],int l,int h)
{
          int t=arr[l];
          arr[l]=arr[h];
          arr[h]=t;
}
int partition(int arr[],int p,int r)
{
          int x=arr[r],i=p-1,j;
          for(j=p;j<r;j++)
                    if(arr[j]<=x)
                              {i=i+1;swap(arr,i,j);
                              }
          swap(arr,i+1,r);
          return i+1;
}
int partitionf(int arr[],int p,int r)
{
          int x=arr[p],
          i=p+1,
          j=r;
                    while(i<=j)
                    {
                              while(arr[i]<x) i++;
                              while(arr[j]>x) j--;
                              if(i<=j)
                              swap(arr,i,j);
                    }
          arr[p]=arr[j];
          arr[j]=x;
          return j;
}
void Quick(int arr[],int c,int p,int r)
{
          if(p<r)
          {
          int q;
                    if(c==1)
                    q=partition(arr,p,r);
                    else
                    q=partitionf(arr,p,r);
          Quick(arr,c,p,q-1);
          Quick(arr,c,q+1,r);
          }
}
void display(int arr[],int n)
{
          for(int i=0;i<n;i++)
          printf("%d ",arr[i]);
          printf("\n");
}
void main()
{         
          int n,i,c;
          printf("Enter length\n");
          scanf("%d",&n);
          int arr[n];
          printf("Enter elements array\n");
          for(i=0;i<n;i++)
          scanf("%d",&arr[i]);
          printf("Original array\n");
          display(arr,n);
          printf("Enter 1 for pivot last and 2 for pivot first\n");
          scanf("%d",&c);
          Quick(arr,c,0,n-1);
          printf("sorted array\n");
          display(arr,n);
}
