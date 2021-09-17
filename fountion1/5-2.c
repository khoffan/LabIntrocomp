#include<stdio.h>
#include<stdlib.h>
float inverse(int); 
int inputExp(void);
main() 
{ 	float c; 
 	printf("Integer Power Calculation\n"); 
	c = inverse(1250);
 	printf("1/a = %f\n", c); 
 	return 0;
	 
}

float inverse(int a){
	int result=1;
	double inverse;
	if(a==0)
		return 0; 
	inverse = (double)1/a;
 	return inverse;
} 


