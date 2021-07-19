#include<stdio.h>
#include<stdlib.h>
int main(){
    char course1[] = "Physics I";
    int credits1=3, sec1=3;
    char course2[] = "Math I";
    int credits2=3, sec2=12;
    char course3[] = "Chemistry";
    int credits3=3, sec3=5;
    char course4[] = "Intro to computer";
    int credits4=3, sec4=8;
    char course5[] = "Teble tennisr";
    int credits5=3, sec5=4;
    char grade1,grade2,grade3,grade4,grade5 ;
    float gpa =0.0,totalcredits=1.0;
    printf("Enter grade(A-E) for each course\n");
    printf("%s\n",course1);
    printf("grade = %c",grade1);
    scanf("%c",&grade1);
    printf("%s\n",course2);
    printf("grade = %d",grade2);
    scanf("%c",&grade2);
    printf("%s\n",course3);
    printf("grade = %d",grade3);
    scanf("%c",&grade3);
    printf("%s\n",course4);
    printf("grade = %d",grade4);
    scanf("%c",&grade4);
    printf("%s\n",course5);
    printf("grade = %d",grade5);
    scanf("%c",&grade5);



}