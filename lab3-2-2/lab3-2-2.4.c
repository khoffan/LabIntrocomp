#include<stdio.h>
int main(){
    int num,i;
    printf("Enter number = ",num);
    scanf("%d",&num);
     
    for(i=1; i<=100; i++){
         
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7)){
            continue;
        } 
		if(i <= num)
            printf(" %d ", i);    
	}
    return 0;
}
