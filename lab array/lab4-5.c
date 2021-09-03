#include<stdio.h>
int main(){
	int i,num[256],num1,count=0;
	printf("Enter 10 number: ");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	printf("number to sreach ",num1);
	scanf("%d",&num1);
	for(i=0;i<10;i++){
		if(num[i]<=num1 && num1 <=10){
			count++;
		}
	}
	if(count >= 10){
		printf("position %d ",count);
	}
	else{
		printf("Do not found");
	}
	
}
