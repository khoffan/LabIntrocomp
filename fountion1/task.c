#include <stdio.h> 
#include <math.h> 
int main(){
	int x,y;
	double c,rt;
	printf("Enter base = ",x);
	scanf("%d",&x);
	printf("Enter expro = ",y);
	scanf("%d",&y);
	c  = pow(x,y);
	rt = x;
	printf("%.2f\n",c);
	printf("%.2f",rt);
	return 0;
}
