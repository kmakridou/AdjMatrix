void show_network_adjacency_matrix(int network[n][n]){
  int i,j,size_neigh;
  printf("These are the connections and their weights of this particular network\n");
  for (i=0;i<n;i++){
	 size_neigh=0;   
	 for (j=0;j<n;j++)
    if (network[i][j]!=0){
		  printf("(%d- %d -%d), ",i+1,network[i][j],j+1);
		  size_neigh++;
		} // end if	
	 printf(" nsize = %d\n", size_neigh);
  } // end for
} // end function

void avg_neigh(int network[n][n]){
	int i,j,neigh=0; 
	float k = 0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
    		if (network[i][j]!=0){
				neigh++;
		} // end if	
	} // end for
	float l = i;
	k = neigh / l; 
	printf("\nAverage graph neighbors %.3f\n", k);
} // end function

float variance(int network[n][n]){
	int i,j, nb=0; 
	float var=0, x=0, sum_pow=0, count = 0;
	float y=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
 	  		if (network[i][j]!=0){
				nb++;/
			}	
		}
	} // end for
	y = i;	
	x = nb / y; 
	for (i=0;i<n;i++){
		float neigh=0;
		float power = 0;  
		for (j=0;j<n;j++){
    		if (network[i][j]!=0){
			  	neigh++;
			}
			power = pow (neigh - x, 2);
		}
	sum_pow = sum_pow + power;
	}	
	var = sum_pow / y;
	printf("\nVariance of the unweighted graph: %.4f\n", var);
}
























