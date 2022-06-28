#include <stdio.h>

void merge2sortedlist(int *A,int lb,int mid,int ub,int *B)
{
    int i=lb,j=mid+1,k=0;
    while(i<=mid && j<=ub)
    {
        if(A[i]<=B[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k]=A[j++];
            k=i+1;
        }
    }
    if(j>ub)
        {
            while(i<=mid)
            {
                B[k++]=A[i++];
        }
            if(i>mid)
            {
                while(j<=ub)
                {
                    B[k]=A[j];
                    k++,i++;
                }
            }
        }
    for(int k=lb;k<=ub;k++)
    A[k]=B[k];
}

int main()
{
    int n;
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    int A[n],B[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    merge2sortedlist(A,0,3,6,B);
    for(int i=0;i<n;i++)
    {
        printf("%d ",B[i]);
    }
    return 0;
}