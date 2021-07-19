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
    char grade1,grade2,grade3,grade4,grade5;
    float gpa =0.0,totalcredits=1.0;
    scanf(" %c %c %c %c %c\0 ",&grade1,&grade2,&grade3,&grade4,&grade5);
	printf("Enter grade(A-E) for each course\n");
    printf("%s\n",course1);
    printf("grade = %c\n",grade1);
    printf("%s\n",course2);
    printf("grade = %c\n",grade2);
    printf("%s\n",course3);
    printf("grade = %c\n",grade3);
    printf("%s\n",course4);
    printf("grade = %c\n",grade4);
    printf("%s\n",course5);
    printf("grade = %c\n",grade5);
    printf("\n\n GREADE REPORT\n");
    printf("--------------------------------------------------\n");
    printf("#  Course          Section      Credits      Grade\n");
	printf("--------------------------------------------------\n");
	printf("1  %-25s             %d            %d           %c\n",course1,sec1,credits1,grade1);
	printf("1  %-25s            %d            %d           %c\n",course2,sec2,credits2,grade2);
	printf("1  %-25s             %d            %d           %c\n",course3,sec3,credits3,grade3);
	printf("1  %-25s             %d            %d           %c\n",course4,sec4,credits4,grade4);
	printf("1  %-25s             %d            %d           %c\n",course5,sec5,credits5,grade5);
	totalcredits = credits1+credits2+credits3+credits4+credits5;
	gpa = ( credits1*('E'-grade1)+credits2*('E'-grade2)+
			credits3*('E'-grade3)+credits4*('E'-grade4)+
			credits5*('E'-grade5) )/totalcredits;
			
	printf("\n GPA = %f\n",gpa);
	printf("----------------\n\n");
	system("PAUSE");
	return 0;
}
