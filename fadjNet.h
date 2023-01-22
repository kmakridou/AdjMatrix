void show_network_adjacency_matrix(int network[n][n]){
  int i,j,size_neigh;
  printf("These are the connections and their weights of this particular network\n");
  for (i=0;i<n;i++){
	 size_neigh=0;   
	 for (j=0;j<n;j++)
    if (network[i][j]!=0){
		  printf("(%d- %d -%d), ",i+1,network[i][j],j+1);///ebala +1 gia na emfanizetai pio omorfa
		  size_neigh++;
		} // end if	
	 printf(" nsize = %d\n", size_neigh);
  } // end for
} // end function

void avg_neigh(int network[n][n]){//pairnw ws eidodo ton pinaka geitniasis
	int i,j,neigh=0; 
	float k = 0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
    		if (network[i][j]!=0){
				neigh++;//gia kathe komvo metraw toys geitones dil. ta 1
		} // end if	
	} // end for
	float l = i;//vazw to i float gia na mporw na kanw prakseis
	k = neigh / l; //k einai o mesow arithmow geitonwn dil oloi oi geitones dia toyw komvous
	printf("\nAverage graph neighbors %.3f\n", k);//ektipwnw ta 3 dekadika meta tin ipodiastoli
} // end function

float variance(int network[n][n]){
	int i,j, nb=0; 
	float var=0, x=0, sum_pow=0, count = 0;
	float y=0;//to xrisimopoiw gia na metatrepso ton int i se float timi gia na min stroggylopoiei to programma 
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
 	  		if (network[i][j]!=0){
				nb++;//vriskw tis sindeseis
			}	
		}
	} // end for
	y = i;	//int i se float y
	x = nb / y; // to xreiazomai gia ton tipo variance p.x 16/7
	for (i=0;i<n;i++){
		float neigh=0; //thelw tous geitones kathe komvoy
		float power = 0;  
		for (j=0;j<n;j++){
    		if (network[i][j]!=0){
			  	neigh++;
			}
			power = pow (neigh - x, 2);//apo ton typo variance (o arithmos ton geitonwn / x )^2
		}
	sum_pow = sum_pow + power;//to sunolo twn power
	}	
	var = sum_pow / y;	//to synolo power / toys komvous
	printf("\nVariance of the unweighted graph: %.4f\n", var);//emfanizei ta 4 dekadika tou variance
}
























