#include<stdio.h>
int main(){
	char ch;
	printf("Enter charector: ",ch);
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
		printf("%c is a vowel,",ch);
	}
	else{
		printf("%c is not vowel.",ch);
	}
	return 0;
}
