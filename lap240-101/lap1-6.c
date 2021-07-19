#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("enter number is: %d\n",num);
    if(num>0){
        if((num%2)==0){
            printf("positive even number\n");
        }
        else{
            printf("positive odd number\n");
        }
    }
    else if(num<0){
        if((num%2)==0){
            printf("positive even number\n");
        }
        else{
            printf("positive odd number\n");
        }
    }
    else{
        if(num==0){
            printf("zero\n");
        }
    }   
    return 0;
}