#include<stdio.h>
 
int main()
{
    int number, reverse = 0;
     
    printf(" Enter number to reverse : ");
    scanf("%d", &number);
  
    while (number != 0)
    {
        reverse = reverse * 10 + (number % 10);
        number = number/10;
    }
  
    printf("\n Reverse number = %d\n", reverse);
  
    return 0;
}