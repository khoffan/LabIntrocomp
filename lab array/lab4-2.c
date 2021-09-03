#include<stdio.h>
#include<math.h>
int main(){
	int i,num_2[10];
	int num_1[10]={1,2,3,4,5,6,7,8,9,10};
	printf("frist array= ");
	for(i=0;i<10;i++){
		printf("%d ",num_1[i]++);
	}
	printf("\nsecond array= ");
	for(i=0;i<10;i++){
		num_2[i]=pow(num_1[i],2);
		printf("%d ",num_2[i]);
	}

}
