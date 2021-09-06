#include <stdio.h> 
#define MAX 10 
int main() 
{ 
    int matA[MAX][MAX]={}, matB[MAX][MAX]={}, matC[MAX][MAX]={}; 
	int ra,rb,ca,cb,i,j,k,sum; 
	printf("Matrix A\n");
	printf("Number of rows = "); scanf("%d",&ra);
	printf("Number of columns = "); scanf("%d",&ca); 
	// Input elements of Matrix A(ra x ca) 
	for (i=0; i<ra; i++) 
	{
	    for(j=0; j<ca; j++) 
		{ 
		    printf("matA(%d,%d)=",i+1,j+1); 
            scanf("%d",&matA[i][j]); 
        }  
    } 
    // Show elements of Matrix A(ra x ca) 
    for (i=0; i<ra; i++) 
   {
        for(j=0; j<ca; j++) printf("%5d",matA[i][j]);
		printf("\n"); 
   } 
    printf("\nMatrix B\n"); 
	printf("Number of rows = "); scanf("%d",&rb);
	printf("Number of columns = "); scanf("%d",&cb); 
	// Input elements of Matrix B(rb x cb) 
    for (i=0; i<rb; i++) 
    { 
        for(j=0; j<cb; j++) 
       {            
            printf("matB(%d,%d)=",i+1,j+1); 
            scanf("%d",&matB[i][j]); 
       } 
    } 
 // Show elements of Matrix B(rb x cb) 
    for (i=0; i<rb; i++) 
    { 
        for(j=0; j<cb; j++) 
		    printf("%5d",matB[i][j]); 
        printf("\n"); 
    } 
 // Addition: Matrix C = A * B
 
    for (i = 0; i < ra; i++) {
        for (j = 0; j < cb; j++) {
            for (k = 0; k < rb; k++) {
                sum = sum + matA[i][k]*matB[k][j];
            }
            matC[i][j] = sum;
            sum=0;
        }
    }
    printf("Matrix C = A * B \n"); 
	for (i=0; i<ra; i++) 
    { 
        for(j=0; j<cb; j++) 
		    printf("%5d",matC[i][j]); 
        printf("\n"); 
    } 
    return 0; 
}
