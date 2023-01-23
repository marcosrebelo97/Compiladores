#include "myComp.h"


void analisa(char *palavra1, char *palavra2){
    int indicie_palavra2 = 0,recon_flag = 0;

    int i = 0;
    palavra2 = (char*)malloc(8*(sizeof(char)));
    init_buff(palavra2,8);

    while(palavra1[i] != '\0'){
        recon_flag = 0;
        indicie_palavra2=0;
        while(recon_flag !=1 && indicie_palavra2 < 8){
            if(palavra1[i] != '\n' && palavra1[i] != '\t' && palavra1[i] != ' '){
                palavra2[indicie_palavra2] = palavra1[i];
                indicie_palavra2++;
            }
            else{
                printf("?????\n");
            }
            if(strcmp(palavra2,GOTO) == 0){
                printf("reconheceu: %s\n",palavra2);
                recon_flag = 1;
                init_buff(palavra2,8);
            }
            printf("palavra2 : %s\n",palavra2);
            printf("letra = %d %c\n",i,palavra1[i]);
            i++;
        }
    }
    free(palavra2);
}





