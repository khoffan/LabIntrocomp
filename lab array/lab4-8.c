#include<stdio.h>
int main(){
	int i,max,number[10],sum;
	float avg=0;
	printf("Enter 10 number: ",number);
	for(i=0;i<10;i++){
		scanf("%d",&number[i]);
		sum += number[i];
	}
	avg = (float)sum/10;
	printf("Average %.1f\n",avg);
	max = 0;
	printf(">");
	for(i=0;i<10;i++){
		if(number[i] > avg){
			printf("%d ",number[i]);
			max++;
			
		}	
	}
	printf("\ncount %d ",max);
	return 0;
	
}
