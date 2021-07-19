#include<stdio.h>
#include<math.h>
int main(){
	int redius,height;
	float volum;
	
	scanf("%d",&redius);
	scanf("%d",&height);
	printf("Enter your redius is :%d\n",redius);
	printf("Enter your height is :%d\n",height);
	volum = 0.3*(3.1415*pow(redius,2)*height);
	printf("Volum is : %.2f\n",volum);
	return 0;
}
