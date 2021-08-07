#include<stdio.h>
#include <stdio.h>
main()
{
    int i=0,je=0,num;
    do
    {
    printf("Input Number : ",num);
    scanf("%d",&num);
        if(num!=0)    //????? if ???????????????????? 0
        {
            if ((num%2)== 0)
            {i++;}
            else
            {je++;}
        }

    }while (num!=0);
    
    printf("There are %d even numbers and %d odd numbers",i,je);
    
}
