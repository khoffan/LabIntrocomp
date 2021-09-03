#include<stdio.h>
int main(){
	int i,max,min,number[10];
	printf("Enter 10 number: ",number);
	for(i=0;i<10;i++){
		scanf("%d",&number[i]);
	}
	max = number[0];
	min = number[0];
	for(i=0;i<10;i++){
		if(number[i] > max){
			max = number[i];
		}	
		else if(min > number[i]){
			min = number[i];
		}
	}
	printf("Max %d \n",max);
	printf("Min %d ",min);
	return 0;
	
}
