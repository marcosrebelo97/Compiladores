#include "myComp.h"

int main(int argc, char *argv[]){
    char *str,*str2 = NULL;
    int buff_size = 400000;
    str = (char*)malloc(buff_size*sizeof(char));
    init_buff(str,buff_size);
    prox_char(argv[1],str);
    printf("%s\n",str);
    print_char(str);

    printf("%s\n",GOTO);
    analisa(str,str2);


    
    
    return 1;
    
}