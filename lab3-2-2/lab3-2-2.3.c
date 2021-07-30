#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ",num);
    scanf("%d",&num);
    if((num%2) != 0 || num == 2){
        printf("%d is a prime number",num);
    }
    else 
        printf("%d is not prime number ",num);
    return 0;
}