#include<stdio.h>  
#define L 20   //max length of a string int main()
int main()  
{  char character;  
   int index, len;  
   char string[L+1];  
   printf("Enter text: ");  
   scanf("%s",string); //��  gets(string); �óյ�ͧ�������ժ�ͧ��ҧ㹢�ͤ���    index=0;   
   while(string[index] != '\0')  {   
   		index++;   
	} 
   	len=index; 
   for(index=0; index<len; index++)   
   {  
   		if(string[index]>='a' && string[index]<='z')          
   		string[index]= string[index] + ('A'-'a');    
	}   
   printf("New string = %s \n", string);     return 0;  
}
