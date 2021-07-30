#include<stdio.h>
int main(){
    int num,num1,num2,num3,num4,sum;
    printf("Enter interger = ",num);
    scanf("%d",&num);
    num1 = num/1000;
    num2 = (num/100)%10;
    num3 = (num/10)%10;
    num4 = (num/1)%10;
    sum = num1+num2+num3+num4;
    printf("sum of digit integers = %d",sum);
    return 0;

}
