#include "myComp.h"

int main(int argc, char *argv[]){
    char *str,str2[4] = "goto";
    int buff_size = 400000;
    str = (char*)malloc(buff_size*sizeof(char));
    init_buff(str,buff_size);
    prox_char(argv[1],str);
    printf("%s\n",str);
    print_char(str);

    printf("%s\n",GOTO);

    if(strcmp(str2,GOTO)==0){
        printf("%d",strcmp(str2,GOTO));
        printf("São iguais!\n");
    }
    else{
        printf("%d",strcmp(str2,GOTO));
        printf("Não sao iguais!\n");
    }


    
    
    return 1;
    
}