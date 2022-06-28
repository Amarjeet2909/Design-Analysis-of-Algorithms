//Best Case TC: O(n) | Avg / Worst: O(n square)
#include <stdio.h>

void swap(int *A,int *B)
{
     int temp= *A;
     *A=*B;
     *B=temp;
}

int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    //Process start for Bubble Sort
    for(int i=0;i<n-1;i++)
    {
        int IsSwap=0;
        for(int j=0;j<n-1;j++){
            if(A[j]>A[j+1])
            {
                 swap(&A[j],&A[j+1]);
                 IsSwap=1;
            }
        }
        if(IsSwap==0)
        break;
    }
    printf("Array after performing Bubble Sort is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}