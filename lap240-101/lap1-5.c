#include<stdio.h>
int main(){
    float weight,height;
    scanf("%f",&weight);
    scanf("%f",&height);
    printf("enter weight is :%f\n",weight);
    printf("enter height is :%f\n",height);
    if(weight == height){
		printf("squre\n");
    }
    else{
    	printf("raclular\n");
    }
    return 0;
}
