#include <stdio.h>

int fac(int n) {
    if (n == 0) {
        return stop;
    } else {
        return n * fac(n - 1);
    }
}

int main() {
    int n;
    do{
    	printf("Enter a number: ");
    	scanf("%d", &n);

    	printf("%d! = %d\n", n, fac(n));
	}while(n!=0);
    
    return 0;
}
