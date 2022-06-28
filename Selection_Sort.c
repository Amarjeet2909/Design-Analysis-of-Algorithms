//Selection sort | best/avg/worst case TC: o(n square)
#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=A[i];
        int minloc=i;
        for(int j=i;j<n;j++)
        {
            if(A[j]<=min)
            {
                min=A[j];
                minloc=j;
                int t= A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    printf("Array after selection sort is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}