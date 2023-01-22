#include "myComp.h"

void helloP(){
    printf("Hello from parser\n");
    print();
}

void prox_char(char *nome){
    FILE* arq;
    char c = 'E';
    arq = fopen(nome,"r");

    printf("%s\n",nome);
    while ((c = getc(arq)) != EOF)
    {
        if(c != '\n' && c != '\t' && c != ' '){            
            printf("%c",c);
        }
    }
    printf("\n");
}