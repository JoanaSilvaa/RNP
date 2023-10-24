//
// Created by aluno on 10/10/23.
//
//importa as bibliotecas
#include <libprg/libprg.h>
#include <stdlib.h>

//recebe como argumento via linha de comando argv (contendo os operados e operandos usados na calculadora)
//e argc que contem o numero de argumentos
int Notacao(int argc, char *argv[]) {
    pilha_t Pilha_notacao;
    //cria uma pilha chamada de Pilha_notacao
    cria_pilha(&Pilha_notacao,argc);
    //cria uma variavel que armanezará os resultados das orperações
    float result = 0;

    //loop que verfica se o  argumento é um operando
    for (int i = 1; i < argc; ++i) {
        //criação de um ponteiro que recebe os argumentos
        char *x = argv[i];
        //se o ponteiro x for o operador *
        //Se for operador, retira o penúltimo e o último operando da pilha. Executa
        //a operação sobre os operandos e armazene o resultado na pilha
        if (*x == '*'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b * a;
            push(&Pilha_notacao,result);
        }
        //se o ponteiro x for o operador /
        //Se for operador, retira o penúltimo e o último operando da pilha. Executa
        //a operação sobre os operandos e armazene o resultado na pilha
        else if(*x == '/'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b / a;
            push(&Pilha_notacao,result);
        }
        //se o ponteiro x for o operador +
        //Se for operador, retira o penúltimo e o último operando da pilha. Executa
        //a operação sobre os operandos e armazene o resultado na pilha
        else if(*x == '+'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b + a;
            push(&Pilha_notacao,result);
        }        
        //se o ponteiro x for o operador -
        //Se for operador, retira o penúltimo e o último operando da pilha. Executa
        //a operação sobre os operandos e armazene o resultado na pilha
        else if(*x == '-'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b - a;
            push(&Pilha_notacao,result);
        }
        //Se for operando, é empilhado
        else{
            //a função atof converte string para float
            *x = atof(x);
            push(&Pilha_notacao,*x);
        }

    }
    //apos fazer isso com todos os argumentos recebidos via linha de comando
    //imprime todos os valores que restaram na pilha e retorna 0
    imprime_pilha(&Pilha_notacao);
    return 0;
}
