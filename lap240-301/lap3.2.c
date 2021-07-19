#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    printf("Enter age = %d\n",age);
    
    if(age<=4)
        printf("pre-school child");
    else if(age<=11)
        printf("kid");
    else if(age<=19)
        printf("adoiescent");
    else if(age<=59)
        printf("adult");
    else
        printf("eiderly"); 
    return 0;
}