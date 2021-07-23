#include<stdio.h>
#include<math.h>
int main()
{
	float distance=0,price=0;
	scanf("%f",&distance);
	distance=ceil(distance);
	if(distance<=10)
	{
		price=35+(5*(distance-1));
	}
	else if(distance>=10)
	{
		price=80+(5.5*(distance-10));
	}
	printf("%.2f",price);
	return 0;
}