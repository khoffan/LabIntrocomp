#include <stdio.h> 
#include <math.h> 
int main() 
{ 	double x1,x2,y;  
	int a,b,c;
	printf("Enter a =",a); scanf("%d",&a);
	printf("Enter a =",b); scanf("%d",&b);
	printf("Enter a =",c); scanf("%d",&c);
	y = sqrt((b*b)-(4*a*c));
	x1 = (-b+y)/(2*a);
	x2 = (-b-y)/(2*a);
 	if(y != (double)y){
 		printf("There is no real number solution for X\n");
	} 
	else if(y>=0) {
		printf("x1 = %.2f\n",x1);
		printf("x2 = %.2f\n",x2);
	}
 	return 0;
}
