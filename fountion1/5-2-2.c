#include<stdio.h>
#include<stdlib.h>
int Number(int a);
int main(){
	int a,x;
	printf("Enter number.")
	scanf("%d",&a);
	x = Number(a);
	return 0;	
}

int Number(int a){
	int i,num=0;
	for(i=1;i<=(a+1);i++){
		num += i-1;
		printf("%d ",num);
		sleep(0);
	}
	return num;
}
