//Insertion Sort | Best case TC O(n) | worst & average case TC o(n square)
#include <stdio.h>

int main()
{
    int n,temp,j;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    //Starting the process for Insertion Sort
    for(int i=1;i<n;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0;j--)
        {
            if(A[j]>temp)
            {
                A[j+1]=A[j];
            }
            else
            break;
        }
        A[j+1]=temp;
    }
    printf("Array after performing Insertion Sort is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}