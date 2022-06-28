#include <stdio.h>

void swap(int *A,int *B)
{
     int temp= *A;
     *A=*B;
     *B=temp;
}

int partition(int A[],int p,int r)
{
    int x= A[r],j;
    int i=p-1;
    for(j=p;j<r;j++)
    {
        if(A[j]<=x)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[r]);
    return (i+1);
}

void QuickSort(int A[],int p,int r)
{
    if(p<r)
    {
        int q= partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}

int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    QuickSort(A,0,n-1);
    printf("Array after performing Quick Sort is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}