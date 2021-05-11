#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float f, c;

    f = LOWER;

    printf("  F\t  C\n");

    while(f <= UPPER)
    {
        c =  5*(f-32)/9;
        printf("%3.0f\t%6.2f\n",f,c);
        f = f + STEP;
    }

    printf("\n\n");
    printf("  C\t  F\n");

    for(c=0;c<=UPPER;c=c+STEP)
    {
        f = ((9*c)/5+32);
        printf("%3.0f\t%6.2f\n",c,f);
    }
}