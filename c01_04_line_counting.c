#include <stdio.h>

int main(){
    int c, nl, bl, tb;

    nl = 0;
    bl = 0;
    tb = 0;

    while((c=getchar()) != EOF){

        if(c=='\n')
            ++nl;
        
        if(c==' ')
            ++bl;

        if(c=='\t')
            ++tb;
    }

        printf("The file has %d line(s) %d space(s) and %d tab(s).\n",nl, bl, tb);
}