#include <stdio.h> 
#include <string.h> 
void toLowerCase (char str[250]); 
int main() 
{ char str[250]; 
 printf("Enter a line of string : "); 
 gets(str); //read one line of text
 printf("Original string\n'%s'\n", str); 
 toLowerCase(str); 
 printf("After toLowerCase\n'%s'\n", str); 
 return 0; 
}
void toLowerCase(char str[250]){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i] >= 'A' && str[i]<='Z'){
			str[i] = str[i]-('A'-'a');
		}
	}
}
