#include<stdio.h>
int main(){
    char grade;
    int num = 10;
    for(int i=0;i<num;i++){
        printf("enter grade = ",i);
        scanf("\n%c",&grade);
        if(grade == 'A'){
            printf("Grade = %c",grade);
            break;
        }
        else if(grade == 'B'){
            printf("Grade = %c",grade);
            break;
        }
        else if(grade == 'C'){
            printf("Grade = %c",grade);
            break;
        }
        else if(grade == 'D'){
            printf("Grade = %c",grade);
            break;
        }
        else if(grade == 'E'){
            printf("Grade = %c",grade);
            break;
        }
    }
    return 0;
}