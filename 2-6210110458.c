#include<stdio.h>
int main(){
	int r=1,h=4,s;
	float pi=22/7,area,v;
	printf("Enter S= ",s);
	scanf("%d",&s);
	area = (pi*r*s)+(pi*r*r);
	v = (pi*r*r*h)/3;
	printf("area is %f\n",area);
	printf("volum is %f",v);
	return 0;
}
