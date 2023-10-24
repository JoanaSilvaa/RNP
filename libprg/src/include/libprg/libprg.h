#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

//Estrutura da pilha
typedef struct{
    int *valores;
    int topo;
    int capacidade;
}pilha_t;

//Pilha
//Declaração de todas as funções utilizadas 
void cria_pilha(pilha_t *fila, int capacidade);
void imprime_pilha(pilha_t *pilha);
void push(pilha_t *pilha, float x);
float pop(pilha_t *pilha);
int tamanho_pilha(pilha_t *pilha);
int vazio_pilha(pilha_t *pilha);
int Notacao(int argc, char *argv[]);

#endif
