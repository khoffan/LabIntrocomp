#include<stdio.h>
int main(){
    int num = 1;
    while(num > 0){
        printf(" %d ",num);
        num = num+1;
        if(num == 11){
            printf(" %d\n");
            continue;
        }  
        else if(num == 21){
            printf(" %d\n");
            continue;
        }
        else if(num == 31){
            printf(" %d\n");
            break;
        }       
    }
    return 0;
}