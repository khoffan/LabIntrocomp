#include<stdio.h>
int main(){
    float weight,height;
    printf("enter weight is :%f\n",weight);
    scanf("%f",&weight);
    printf("enter height is :%f\n",height);
    scanf("%f",&height);
    if(weight == height){
        printf("squre\n");
    }
    else{
        printf("raclular\n");
    }
    return 0;
}