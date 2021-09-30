#include <stdio.h> 
#include <stdio.h> 
int a=1; //global
float x=2.5; //global 
int F1(int b) 
{ a++; x=x*a; b=b+a; //local
 printf("In F1, a=%d, b=%d, x=%.2f\n", a, b, x); 
 return b; 
} 
void F2(float y); 
int main() 
{ int b=4,m=0; //local
 a++; x++;
 printf("In main, b=%d, m=%d, a=%d, x=%.2f\n",b,m,a,x); 
 m=F1(b); 
 printf("In main, b=%d, m=%d, a=%d, x=%.2f\n",b,m,a,x); 
 F2(m); 
 printf("In main, b=%d, m=%d, a=%d, x=%.2f\n",b,m,a,x); 
 F1(m);
 return 0; 
} 
void F2(float y) 
{ float x=1.5; //local
 x=x+y; a++; y++; 
 printf("In F2, x=%.2f, y=%.2f,a=%d\n",x, y,a); 
} 

