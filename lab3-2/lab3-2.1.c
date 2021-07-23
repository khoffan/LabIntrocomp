#include<stdio.h>
int main(){
    int num = 1;
    while(num > 0){
        printf("%d\n",num);
        num = num+1;
        if(num == 31)
            break;
    }
}