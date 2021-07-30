#include<stdio.h>
int main(){
    int tempareture;
    scanf("%d",&tempareture);
    switch(tempareture){
        case 10 : printf("very cold");break;
        case 15 : printf("very cold");break;
        case 20 : printf("so cool!!");break;
        case 26 : printf("Wisk i am on the beach");break;
        case 33 : printf("Wisk i am on the beach");break;
        case 35 : printf("Super hot");break;
    }
    /*if(tempareture<=10)
        printf("very cold");
    else if(tempareture<=20)
        printf("so cool!!");
    else if(tempareture<=26)
        printf("Wisk i am on the beach");
    else if(tempareture<=33)
        printf("Wisk i am on the beach");
    else 
        printf("Super hot");*/
    return 0;
}