#include <stdio.h>

int BinarySearch(int A[],int l,int r,int key)
{
     if(r>=l)
     {
        int mid= l+(r-1)/2;
        if(A[mid]==key)
        return mid;

        if(A[mid]>key)
        return BinarySearch(A,l,mid-1,key);

        if(A[mid]<key)
        return BinarySearch(A,mid+1,r,key);
     }
     return -1;
}

int main()
{
    int n,key;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d",&key);
    int result= BinarySearch(A,0,n-1,key);
    if(result==-1)
    printf("Element not found\n");
    else
    printf("Element found at location: %d",result+1);
    return 0;
}