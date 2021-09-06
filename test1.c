#include<stdio.h>
int main() {
	long long n,sub;
	printf("Enter id ",n);
	scanf("%lld",&n);
	sub = 65-(n/100000000);
	printf("%d",sub);
	return 0;
}

