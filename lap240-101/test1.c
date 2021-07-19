#include<stdio.h>
int main(){
	float x,y,z ;
	char s ;
	scanf("%f  %f",&x,&y);
	printf("weight and height AND parent = %.2f %.2f\n",x,y);
	scanf("%s",&s);
	printf("%c",s);
	z = (x/(y*y));
	printf("BMI of %c = BMI of %f\n",s,z);
	return 0;
}
