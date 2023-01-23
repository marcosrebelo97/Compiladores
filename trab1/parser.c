#include "myComp.h"

void prox_char(char *nome,char *buff){
    FILE* arq;
    char c = 'E';
    int i = 0;
    arq = fopen(nome,"r");

    printf("%s\n",nome);
    while ((c = getc(arq)) != EOF)
    {
        if(c != '\n' && c != '\t' && c != ' '){            
            printf("%c",c);
        }
        buff[i] = c;
        i++;
    }
    printf("\n");
}

void init_buff(char *buff,int tam){
    int i;
    for(i = 0; i < tam;i++){
        buff[i] = '\0';
        i++;
    }
}


void print_char(char *buff){
    int i = 0;
    while(buff[i] != '\0'){
        printf("%c",buff[i]);
        i++;
    }
}