//
// Created by aluno on 10/10/23.
//
#include <libprg/libprg.h>
#include <stdlib.h>


int Notacao(int argc, char *argv[]) {
    pilha_t Pilha_notacao;
    cria_pilha(&Pilha_notacao,argc);

    float result = 0;

    for (int i = 1; i < argc; ++i) {
        char *x = argv[i];
        if (*x == '*'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b * a;
            push(&Pilha_notacao,result);
        }
        else if(*x == '/'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b / a;
            push(&Pilha_notacao,result);
        }
        else if(*x == '+'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b + a;
            push(&Pilha_notacao,result);
        }
        else if(*x == '-'){
            float a = pop(&Pilha_notacao);
            float b = pop(&Pilha_notacao);
            result = b - a;
            push(&Pilha_notacao,result);
        }
        else{
            *x = atof(x);
            push(&Pilha_notacao,*x);
        }

    }
    imprime_pilha(&Pilha_notacao);
    return 0;
}