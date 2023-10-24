#include <stdio.h>
#include <libprg/libprg.h>

int main(int argc, char *argv[]) {
    //mensagem que printa junto comos resultados recebidos da função
    printf("Conforme as informacoes passadas via linha de comando o resultado eh: ");
    //função que contem o resultado da calculadora
    //recebe como argumento o argc que contem o numero de argumentos recebidos via linha de comando
    //e recebe o argv que são os operadores e operandos para serem usadas na calculadora
    Notacao(argc,argv);
    return 0;
}
