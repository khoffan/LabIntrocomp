
#include<stdio.h>
int main(){
    float in,out,z;
    int x,y,price,total;
    scanf("%f %f",&in,&out);
    price = 50;
    x = in*60;
    y = out*60;
    z = (y-x)/60;
    printf("Enter-time = %.2f\n",in);
    printf("Out-time = %.2f\n",out);
    printf("check : %.2f\n",z);
    if((y-x)<=2){
        printf("Charge : %d",price);
    }
    else{
        total = price+((z-2)*10);
        printf("Charge : %d",total);

    }
    return 0;

}