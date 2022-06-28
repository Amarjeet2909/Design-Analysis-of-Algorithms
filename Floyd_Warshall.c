#include <stdio.h>
#define INF 1e4
void show(long A[4][4]);

void show(long A[4][4])
{
   int i,j,step=1;
   printf("\nShortest path Array A\n");
   for(i=0;i<4;i++){
     printf("\n");
     for(j=0;j<4;j++){
       printf("%ld ",A[i][j]);
    }
  }
  printf("\n");
}

int main()
{
   int i,j,k;

   //Initial Array is:

   long A[4][4]={{0,8,INF,7},{3,0,2,INF},{5,INF,0,1},{4,INF,INF,0}};

   for(k=0;k<4;k++){
     for(i=0;i<4;i++){
       for(j=0;j<4;j++){
          if(A[i][j]>A[i][k]+A[k][j] && A[i][k]!=INF && A[k][j]!=INF)
          {
             A[i][j]= A[i][k]+A[k][j];
          }
       }
    }
    show(A);
  }
  
   printf("\n\n");

   return 0;
}