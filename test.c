#include<stdio.h>
int main(){
    long long num;
    int num1;
    printf("student code: ",num);
    scanf("%lld",&num);
    num1 = (num/100000000);
    switch(num1){
    	case 62:printf("3"); break;
    	case 63:printf("2"); break;
    	case 64:printf("1"); break;
    	defult: printf("NULL");
	}
    
}
