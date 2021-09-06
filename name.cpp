#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30] ;
	gets(name);
    printf("Hello \"%s\"",name);
    
    exit(EXIT_SUCCESS);
    return 0;
}
