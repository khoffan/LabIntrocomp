#include<stdio.h>
int main(){
    char C ;
    scanf("%c\0",&C);
    switch(C){
        case 'r': printf("Red");
        break;
        case 'R': printf("Red");
        break;
        case 'Y': printf("Yellow");
        break;
        case 'y': printf("Yellow");
        break;
        case 'G': printf("Green");
        break;
        case 'g': printf("Green");
        break;
        default: printf("stop");
        break;
    }
    return 0;
}