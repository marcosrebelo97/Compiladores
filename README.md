# Compiladores

    Parser;

    Strips;

    Análise Lexa;

    Análise Sintática. 

Funções: 

● analex(): função que implementa o diagrama de transição do analisador léxico.

● prox_char(): esta função deve retornar apenas um caractere do arquivo de entrada por vez
quando for chamada. Ela faz a interface entre o arquivo de entrada e o programa.

● grava_token(): faz a gravação do token e do seu lexema no arquivo de saída