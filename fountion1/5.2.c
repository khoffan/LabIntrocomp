#include <stdio.h> 
#include <stdlib.h> // for using srand() and rand()
#include <time.h> // for using time()
main() 
{ 	int n, a, r,m; 
	srand(time(NULL)); 
	printf("numbers = ",n,m);
	scanf("%d %d",&n,&m); 
	for(a=1;a<m; a++) { 
 		r = rand()%m; 
 		printf("%d\n", r );
 		if(r == n){
 			break;
		 }
	} 
	return 0; 
} 

