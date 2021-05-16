#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, nl, state = 0;
    int wc = 0;

    while((c=getchar()) != EOF){
        if(c=='\n'||c=='\t'||c==' '){
            state = OUT;
            printf("\n");
        }else if(state==OUT){
            printf("%c",c);
            state = IN;
           ++wc;
        }else if(state==IN){
            printf("%c",c);
        }
    }

    printf("%d\n",wc);
}