#include<stdio.h>
#include<math.h>
int main(){
    float weight,height,total;
    scanf("%f %f",&weight,&height);
    total = weight/pow(height,2);
    printf("BMI = %.2f\n",total);
    if(total < 18.5)
        printf("Undeweight\n");
    else if(18.5<= total && total < 25)
        printf("normal\n");
    else if(25<= total && total < 30)
        printf("Overweight\n");
    else 
       printf("Obese\n"); 
    return 0;
}