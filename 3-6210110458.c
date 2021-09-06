#include<stdio.h>
int main(){
	int price,year,FA,MA,dok;
	float DP;
	printf("Enter car price = ",price);
	scanf("%d",&price);
	printf("Enter Down payment = ",DP);
	scanf("%f",&DP);
	printf("Enter year of payment = ",year);
	scanf("%d",&year);
	FA = (price-((DP/100)*price));
	dok = ((3.5/100)*FA);
	MA = ((dok*year)+FA)/year;
	printf("amount ower peyment = %d",MA);
	return 0;
}
