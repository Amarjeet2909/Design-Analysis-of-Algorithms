//Multiplication of Two m*n matrices | TC: O(n cube)
#include <stdio.h>

int main(){
    int m,n,p,q;
    //making first matrix
    printf("Enter the row size of first matrix:\n");
    scanf("%d",&m);
    printf("Enter the column size of first matrix\n");
    scanf("%d",&n);
    int A[m][n];
    printf("Enter the Elements in first matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    //making second matrix
    printf("Enter the column size of second matrix\n");
    scanf("%d",&q);
    int B[n][q];
    printf("Enter the Elements in second matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }
    //Declaring final matrix
    int C[m][q];
    //multiplying the matrices
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            int temp=0;
            for(int k=0;k<n;k++){
                temp+=A[i][k]*B[k][j];
                C[i][j]=temp;
            }
        }
    }
    //final result
    printf("Multiplication of the entered matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}