#include<stdio.h>
float distance(float x1, float y1, float x2, float y2);
int main(){
	float x1,x2,y1,y2,d;
	printf("Enter x1 ",x1); scanf("%f",&x1);
	printf("Enter x2 ",x2); scanf("%f",&x2);
	printf("Enter y1 ",y1); scanf("%f",&y1);
	printf("Enter y2 ",y2); scanf("%f",&y2);
	d = distance(x1,y1,x2,y2);
	printf("distance is %f",d);
	return 0;
}

float distance(float x1, float y1, float x2, float y2){
	float d;
	d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return d;
}
