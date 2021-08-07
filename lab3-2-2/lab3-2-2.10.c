#include<stdio.h>
int main(){
    int i,mor=0,car=0;
    char C;
    for(i=0;i<=50;i++){
        printf("vehicle: ",i);
        scanf("\n%c",&C);
        if( C == 'a'){
            mor += 1;
        }
        else if( C == 'b'){
            mor -= 1;
        }
        else if( C == 'c'){
            car += 1;
        }
        else if( C == 'd'){
            car -= 1;
        }
        else if( C == 'q'){
            break;
        }
        if((car%10) ==0){
            printf("car : %d\n",car);
            continue;
        }
        if((mor%10)== 0){
            printf("mor = %d\n",mor);
            continue;
        }
    }
    return 0;
}
