#include<stdio.h>
int main(){
	int i;
	char str[256];
	char ch_sr , ch_re;
	printf("Enter string ",str);
	scanf("\n%s",&str);
	printf("Enter sreach charector ",ch_sr);
	scanf("\n%c",&ch_sr);
	printf("\nEnter replace charector ",ch_re);
	scanf("\n%c",&ch_re);
	while(str[i] != '\0'){
		if(str[i] == ch_sr){
			str[i] = ch_re;	
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
