#include<stdio.h>
int main(){
    int height,age;
    scanf("%d %d",&age,&height);
    printf("age and height = %d %d\n",age,height);
    if((age>18)&&(height>165))
        printf("Good");
    else   
        printf("Not good");
    return 0;
}