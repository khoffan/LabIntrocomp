#include<stdio.h>
int main(){
    int num,value,i,sum=0;
    printf("Enter integers you want = ",num);
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("Enter %d interger = ",num,i);
        scanf("\n%d",&value);
        sum = sum + value;
    }
    printf("sum of entered integers = %d\n",sum);
    return 0;
}
