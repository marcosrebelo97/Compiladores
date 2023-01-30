#ifndef myComp
#define myComp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prox_char(char *nome, char *buff);

void init_buff(char *buff, int tam);

void print_char(char *buff);

void analisa(char *palavra1, char *palavra2);

int comparar_tam3(char *palavra);

int comparar_tam4(char *palavra);

int comparar_tam5(char *palavra);

int comparar_tam6(char *palavra);

int comparar_tam8(char *palavra);

int comparar_tam2(char *palavra);

#define OP_V ","            /*1*/
#define OP_PV ";"           /*1*/
#define OP_PA "("           /*1*/
#define OP_PF ")"           /*1*/
#define OP_CA "["           /*1*/
#define OP_CF "]"           /*1*/
#define OP_CHA "{"          /*1*/
#define OP_CHF "}"          /*1*/
#define OP_SUM "+"          /*1*/
#define OP_SUB "-"          /*1*/
#define OP_MULT "*"         /*1*/
#define OP_DIV "/"          /*1*/
#define OP_P "%"            /*1*/
#define OP_IT "?"           /*1*/
#define OP_DP ":"           /*1*/
#define OP_EX "!"           /*1*/
#define OP_PT "."           /*1*/
#define OP_ME "<"           /*1*/
#define OP_MA ">"           /*1*/
#define OP_R "="            /*1*/
#define OP_MG "+="          /*2*/
#define OP_MEIG "-="        /*2*/
#define OP_AT "*="          /*2*/
#define OP_DG "/="          /*2*/
#define OP_PG "%="          /*2*/
#define OP_S "++"           /*2*/
#define OP_EC "&&"          /*2*/
#define OP_OU "||"          /*2*/
#define OP_ST "=>"          /*2*/
#define OP_IG "=="          /*2*/
#define OP_DIF "!="         /*2*/
#define OP_MEG "<="         /*2*/
#define OP_MAG ">="         /*2*/
#define DO "do"             /*2*/
#define IF "if"             /*2*/
#define INT "int"           /*3*/
#define FOR "for"           /*3*/
#define OP_ET "etc"         /*3*/
#define VOID "void"         /*4*/
#define CHAR "char"         /*4*/
#define ELSE "else"         /*4*/
#define GOTO "goto"         /*4*/
#define TREU "true"         /*4*/
#define FLOAT "float"       /*5*/
#define WHILE "while"       /*5*/
#define BREAK "break"       /*5*/
#define FALSE "false"       /*5*/
#define RETURN "return"     /*6*/
#define BOOL "booleano"     /*8*/
#define CONTINUE "continue" /*8*/

#endif
