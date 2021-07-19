#include<stdio.h>
int main(){
    int tempe;
    float fahren;
    scanf("%d",&tempe);
    printf("Temperature is = %d\n",tempe);
    fahren = (((9/5)*tempe)+32);
    printf("Fahrenheit = %.2f\n",fahren);
    return 0;
}