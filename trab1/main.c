#include "myComp.h"

int main(int argc, char *argv[]){
    char *str;
    int buff_size = 400000;
    str = (char*)malloc(buff_size*sizeof(char));
    init_buff(str,buff_size);
    prox_char(argv[1],str);
    printf("%s\n",str);
    print_char(str);
    
    return 1;
    
}