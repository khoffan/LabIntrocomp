#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char ch[3],all;
	int len = sizeof(ch)/sizeof(char);
	printf("Enter string= ");
	scanf("%s",&ch[i]);
	/*for(i=0;i<len;i++){
		printf("1.ch[%d] chareacter: %c\n",i,ch[i]);
	}*/
	for(i=2;i>=0;i--){
		printf("%c",ch[i]);
	}
}
