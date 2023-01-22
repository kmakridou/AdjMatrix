#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   n       7

#include "fadjNet.h"

int main(){
  int i,j;
  int network[n][n]; 

  for (i=0;i<n;i++) {  
    for (j=0;j<n;j++) {
    network[i][j]=0;
    network[j][i]=0;
  }
}
	
	
  network[0][1]=1; network[0][2]=1; 
  network[1][0]=1; network[1][2]=1; 
  network[2][0]=1; network[2][1]=1; network[2][3]=1;
  network[3][2]=1; network[3][4]=1; network[3][5]=1;
  network[4][3]=1; network[4][5]=1;
  network[5][3]=1; network[5][4]=1;network[5][6]=1;
  network[6][5]=1;
  
  show_network_adjacency_matrix(network);
  avg_neigh(network);
  
  
  variance(network);
}
 /* end */
