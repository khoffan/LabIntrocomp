#include<stdio.h>
#define pi 3.14159
float Vcylinder(float d, float h);
int main(){
	float volum,h,d;
	printf("Enter value height and diameter.\n");
	printf("diameter = ",d); scanf("%f",&d);
	printf("height = ",h); scanf("%f",&h);
	volum = Vcylinder(d,h);
	printf("Volum = %f\n",volum);
	return 0;
	
	
}

float Vcylinder(float d,float h){
	float v;
	v = pi*pow(d/2,2)*h;
	return v;
}
