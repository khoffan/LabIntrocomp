 #include<stdio.h> 
int main() 
{ 
    int i, j, scores[3][5];
    float sum,avg; 
    
    for (i=0; i<3; i++) 
    { 
	    for (j=0, sum=0.0; j<5; j++) {
	    	scanf("%d",&scores[i][j]);
	    }
	}
    for (i=0; i<3; i++) 
    { 
	    for (j=0, sum=0.0,avg=0.0; j<5; j++) {
            sum = sum+scores[i][j];
	    }
        avg = sum/5;
	    printf("Sum of row %d = %.2f \n",i+1, sum); 
	    printf("Average of row %d = %.2f \n\n",i+1, avg); 
	    
	}
	return 0; 
}
