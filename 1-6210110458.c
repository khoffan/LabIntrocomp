#include<stdio.h>
int main(){
	int r=1,h;
	float pi=22/7,area;
	printf("Enter height ",h);
	scanf("%d",&h);
	area = pi*r*(h+2)*pi*r*r;
	printf("area is %f",area);
	return 0;
}
