//
// Created by aluno on 03/10/23.
//

//Importação das bibliotecas
#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Função que cria uma pilha, fazendo alocação dinâmica de memória (utilizando malloc) de uma quantidade pré-definida de elementos da pilha.
void cria_pilha(pilha_t *pilha, int capacidade){
    pilha->valores = malloc(sizeof (int)*capacidade);
    //Mensagem de erro caso não seja possivel fazer a alocação de memoria
    if(pilha->valores == NULL){
        printf("Falha na alocação de memoria\n");
        exit(1);
    }
    pilha->capacidade =  capacidade;
    pilha->topo = -1;
}
//função que incrementa o topo da pilha e coloca o valor no topo da pilha 
void push(pilha_t *pilha, float x){
        pilha->topo++;
        pilha->valores[pilha->topo] = x;
}
//função que imprime a pilha na mesma ordem que desempilha (o ultiumo a entrar é o primeiroo a sair)
void imprime_pilha(pilha_t *pilha){
    for (int i = pilha->topo; i >= 0; --i) {
        printf("%d ", pilha->valores[i]);
    }
}
//função que retira o valor do topo da pilha e decrementa o topo
float pop(pilha_t *pilha){
    float x;
    x = pilha->valores[pilha->topo];
    pilha->topo--;
    return x;
}
//retorna o tamanho da pilha
int tamanho_pilha(pilha_t *pilha){
    int tamanho = pilha->capacidade - pilha->topo;
    return tamanho;
}
//função que verifica se a pilha está vazia
int vazio_pilha(pilha_t *pilha){
    if (pilha->topo==0){
        return 0;
    }
    else{
        return 1;
    }
}

