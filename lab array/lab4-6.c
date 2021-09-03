#include<stdio.h>
int main(){
	char ch[256];
	int i,j=0;	
	printf("1.Enter string: ",ch);
	scanf("%s",&ch);
	while(ch[0] != '\0'){
		for(i=0;i<256;i++){
			if(ch[i] == 'a'){
				j = 1;
			}
		}
		if(j == 1){
			printf("Good");
			break;
		}
		else{
			printf("Not good");
			break;
		}
		
	}
	return 0;
	
}
