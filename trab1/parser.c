#include "myComp.h"

void helloP(){
    printf("Hello from the parser\n");
}

void prox_char(char *nome){
    FILE* arq;
    char c = 'E';
    arq = fopen(nome,"r");

    printf("%s\n",nome);
    while ((c = getc(arq)) != EOF)
    {
        if(c != '\n' && c != '\t' && c != ' '){
            printf("%c \n",c);
        }
    }
            printf("\n");

}
