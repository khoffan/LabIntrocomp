#include<stdio.h>
double powInt(int a,int n);
int main(){
	int a ,n;
	float z;
	printf("base = ",a); scanf("%d",&a);
	printf("exponant = ",n); scanf("%d",&n);
	z = powInt(a,n);
	printf("value = %f",z);
	return 0;
	
}

double powInt(int a,int n){
	int i,result1=1,result2=1;
	float inverse;
	if(n == 0)
		return 1;
	if(n > 0){
		for(i=0;i<n;i++)
			result1 *= a;
		return result1;
	}
	if(n < 0){
		for(i=0;i>n;i--)
			result2 *= a;
		inverse = (float)1/result2;
		return inverse;
	}
}
