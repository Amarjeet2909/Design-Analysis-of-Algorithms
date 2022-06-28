// Prim's Algorithm in C

#include<stdio.h>

#define INF 32000

// number of vertices in graph
#define V 6

// create a 2d array of size 6x6
//for adjacency matrix to represent graph
int G[V][V] = {
  {0, 3, 0, 0, 6, 5},
  {3, 0, 1, 0, 0, 4},
  {0, 1, 0, 6, 0, 4},
  {0, 0, 6, 0, 8, 5},
  {6, 0, 0, 8, 0, 2},
  {5, 4, 4, 5, 2, 0}
  };

int main() {
  int no_edge;  // number of edge
  int i,j,sum=0;

  // create a array to track selected vertex
  // selected will become true otherwise false
  int selected[V];

  // set selected false initially
  for(i=0;i<V;i++)
    selected[i]=0;
  
  // set number of edge to 0
  no_edge = 0;

  // the number of egde in minimum spanning tree will be
  // always less than (V -1), where V is number of vertices in
  //graph

  // choose 0th vertex and make it true
  selected[0] = 1;

  int x;  //  row number
  int y;  //  col number

  // print for edge and weight
  printf("Edge : Weight\n");

  while (no_edge < V - 1) {
    //For every vertex in the set S, find the all adjacent vertices
    // , calculate the distance from the vertex selected at step 1.
    // if the vertex is already in the set S, discard it otherwise
    //choose another vertex nearest to selected vertex  at step 1.

    int min = INF;
    x = 0;
    y = 0;

    for (i = 0; i < V; i++) {
      if (selected[i]==1) {
        for (j = 0; j < V; j++) {
          if (selected[j]==0 && G[i][j]!=0) {  // not in selected and there is an edge
            if (min > G[i][j]) {// in first step INF>3, 3>6 X;   3>5X
              min = G[i][j];
              x = i;//0(a)
              y = j;//1(b)
            }
          }
        }
      }
    }
    sum+=min;
    printf("%d - %d : %d\n", x, y, G[x][y]);// 0(a) - 1(b):3
    selected[y] = 1;//1(b)
    no_edge++;
  }
  printf(" Total cost of the graph %d\n",sum);

  return 0;
}