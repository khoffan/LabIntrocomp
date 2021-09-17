#include<stdio.h>
char grade(int score);
int main(){
	int score;
	printf("Enter score ",score); scanf("%d",&score);
	grade(score);
	return 0;
}

char grade(int score){
	if(score >= 80){
		printf("grade A");
	}
	else if(score > 70 ){
		printf("grade B");
	}
	else if(score > 60 ){
		printf("grade C");
	}
	else if(score > 50){
		printf("grade D");
	}
	else{
		printf("grade E");
	}
}
