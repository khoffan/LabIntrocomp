#include<stdio.h>
int main(){
	int i,num[10];
	printf("Enter 10 number: ");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	printf("reverse number: ");
	for(i=9;i>0;i--){
		printf(" %d ",num[i]);
	}
}
