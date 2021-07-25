
#include<stdio.h>
#include<stdlib.h>
int main(){
    int in,out,price,total,minit1,minit2,in1,out1;
    scanf("%d %d %d %d",&in1,&minit1,&out1,&minit2);
    price = 50;
    in = abs(in1-out1)-1;
    out = abs((minit1-minit2)-60);
    printf("Enter-time = %d : %d\n",in1,minit1);
    printf("Out-time = %d : %d\n",out1,minit2);
    printf("check : %d hour : %d minit\n",in,out);
    if((abs(in1-out1)+1)<=2){
        printf("Charge : %d",price);
    }
    else{
        total = price+((in-1)*10);
        printf("Charge : %d",total);

    }
    return 0;

}
