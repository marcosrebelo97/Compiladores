#include "myComp.h"

void analisa(char *palavra1, char *palavra2)
{
    int indicie_palavra2 = 0, recon_flag = 0;

    int i = 0;
    palavra2 = (char *)malloc(8 * (sizeof(char)));
    init_buff(palavra2, 8);

    while (palavra1[i] != '\0')
    {
        recon_flag = 0;
        init_buff(palavra2, 8);
        indicie_palavra2 = 0;

        while (recon_flag != 1 && indicie_palavra2 < 8)
        {
            if (palavra1[i] != '\n' && palavra1[i] != '\t' && palavra1[i] != ' ')
            {
                palavra2[indicie_palavra2] = palavra1[i];
                printf("%s \n", palavra2);
                indicie_palavra2++;
            }

            if (indicie_palavra2 == 4)
            {
                recon_flag = comparar_tam4(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;
            /* if (strcmp(palavra2, GOTO) == 0)
            // {
            //     recon_flag = 1;
            //     printf("reconheceu: %s\n", palavra2);
            // } */
            if (indicie_palavra2 == 3)
            {
                recon_flag = comparar_tam3(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;

            if (indicie_palavra2 == 5)
            {
                recon_flag = comparar_tam5(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;

            if (indicie_palavra2 == 6)
            {
                recon_flag = comparar_tam6(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;

            if (indicie_palavra2 == 8)
            {
                recon_flag = comparar_tam8(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;

            if (indicie_palavra2 == 8)
            {
                recon_flag = comparar_tam2(palavra2);
                printf("%d \n", recon_flag);
            }
            i++;
        }
    }
    free(palavra2);
}

int comparar_tam3(char *palavra)
{
    if (strcmp(palavra, INT) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, FOR) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_ET) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    return 0;
}

int comparar_tam4(char *palavra)
{
    if (strcmp(palavra, VOID) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, CHAR) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, ELSE) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, GOTO) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, TREU) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    return 0;
}

int comparar_tam5(char *palavra)

{
    if (strcmp(palavra, FLOAT) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, WHILE) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, BREAK) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    return 0;
}

int comparar_tam6(char *palavra)
{
    if (strcmp(palavra, RETURN) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }
    return 0;
}

int comparar_tam8(char *palavra)
{
    if (strcmp(palavra, BOOL) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, CONTINUE) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }
    return 0;
}

int comparar_tam2(char *palavra)
{
    if (strcmp(palavra, OP_MG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_MEIG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_AT) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_DG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_PG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_S) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_EC) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_OU) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_ST) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_IG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_DIF) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_MEG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_MAG) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, DO) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, IF) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }
    return 0;
}

int comparar_tam2(char *palavra)
{
    if (strcmp(palavra, OP_V) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_PV) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }

    if (strcmp(palavra, OP_PA) == 0)
    {
        printf("Token: %s\t", palavra);
        return 1;
    }
    return 0;
}