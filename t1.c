//Prism's Program
#include <stdio.h>
#define INF 32000
#define v 6

int G[v][v]={{1,0,3,5,0,7},
{1,3,0,9,0,4},
{3,0,0,7,5,9},
{2,3,0,0,6,4},
{2,6,0,0,0,1},
{4,6,0,7,0,1}};

int main()
{
    int i,j,sum=0;
    int No_of_Edges=0;
    int selected[v];
    for(i=0;i<v;i++)
       selected[i]=0;
    int x,y;
    while(No_of_Edges<v-1){
        int min=INF;
        x=0,y=0;
        for(i=0;i<v;i++){
            if(selected[i]==1){
                for(j=0;j<v;j++){
                    if(selected[j]==0 && G[i][j]!=0){
                        if(min>G[i][j]){
                            min=G[i][j];
                            x=i,y=j;
                        }
                    }
                }
            }
        }
        sum+=min;
        printf("%d - %d: %d\n",x,y,G[x][y]);
        selected[y]=1;
        No_of_Edges++;
    }   
    printf("Total cost of edges is: %d\n",sum);
    return 0;
}