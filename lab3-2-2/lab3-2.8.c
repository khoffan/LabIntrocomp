#include<stdio.h>
 
int main()
{
    int num,sum = 0,i;
    float avg;
    printf("Enter number: ",num);
    scanf("%d",&num);
    for(i =0;i<=num;i++){
        sum += i;
    }
    avg = sum/(float)num;
    printf("sum : %.2f",avg);
    return 0;
}
