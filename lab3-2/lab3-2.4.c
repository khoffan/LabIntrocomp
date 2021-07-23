#include<stdio.h>
int main(){
    int input,i,num;
    scanf("%d",&input);
    for(i=1;i<=12;i++){
        num = input*i;
        printf("%d x %d = %d\n",input,i,num);
    }
    return 0;
}