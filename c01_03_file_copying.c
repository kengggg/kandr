#include <stdio.h>

int main()
{
    int c;

    printf("EOF = %d\n",EOF);

    c = getchar();
    
    while((c=getchar()) != EOF)
    {
        putchar(c);
    }
}