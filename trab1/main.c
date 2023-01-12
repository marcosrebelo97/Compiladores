#include "myComp.h"

int main(int argc, char *argv[]){

    unsigned int b;
    int a;
    char str[200];
    FILE* arq;

    arq = fopen(argv[1],"r");

    prox_char(argv[1]);
    printf("hello from the main\n");
  
    helloP();

    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    
    default:
        break;
    }

    return a;
}