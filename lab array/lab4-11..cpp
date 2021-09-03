#include<stdio.h>
int main(){
	int i,word=0;
	char str[256];
	printf("Enter subject ",str);
	gets(str);
	if(str[0] != '\0'){
		word = 1;
		while(str[i] != '\0'){
			if(str[i] == ' '){
				word ++;
			}	
			i++;
		}
	}
	printf("Word is %d",word);
}
