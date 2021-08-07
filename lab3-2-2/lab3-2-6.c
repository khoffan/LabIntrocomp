#include<stdio.h>
int main(){
    int i,sum=0;
    char c;
    for(i=0;i<=50;i++){
        printf("Box: ",i);
        scanf("\n%c",&c);
        if( c == '+'){
            sum += 1;
        }
        else if( c == '-'){
            sum -= 1;
        }
        else if( c == 'q'){
            printf("sum = %d",sum);
            break;
        }
        if(sum == 50){
            printf("FUUL");
            break;
        }
    }
    return 0;
}
