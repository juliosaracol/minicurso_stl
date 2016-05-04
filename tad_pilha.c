#include "tad_pilha.h"
#include <stdlib.h>
#include <stdio.h>
//MAKE:cria o descritor da pilha
struct descritor_pilha* make(void){
	struct descritor_pilha* newStack = (struct descritor_pilha*) malloc(sizeof(struct descritor_pilha));
	newStack->topo = NULL;
	newStack->tamanho=0;
	return newStack;
}
//MAKENODE : cria um nodo da pilha
struct nodo* makeNode(int chave){
	struct nodo* newNode = (struct nodo*) malloc(sizeof(struct nodo));
	newNode->chave = chave;
	newNode->proximo = NULL;
	return newNode;
}
//MAKENULL(S): elimina todos os elementos da pilha
struct descritor_pilha* makeNull(struct descritor_pilha* pilha, int novaChave){
		struct nodo* actual = pilha->topo;
		while(actual != NULL){
			struct nodo *temp= actual;
			actual = actual->proximo;
			free(temp);
		}
		free(pilha);
		printf("PILHA APAGADA\n");
		return pilha;	
}
//TOP(S): retorna o elemento no topo da pilha, sem retirá-lo no entanto
struct nodo* top(struct descritor_pilha* pilha){
		printf("TOPO PILHA %d\n",pilha->topo->chave);
		return pilha->topo;
}
//POP(S): apaga o elemento no topo da pilha; em algumas implementações, POP(S) pode retornar também o elemento no topo da pilha
struct descritor_pilha* pop(struct descritor_pilha* pilha){
		struct nodo *temp = pilha->topo;
		printf("POP PILHA no elemento %d\n",pilha->topo->chave);
		pilha->topo = temp->proximo;
		pilha->tamanho--;
		free(temp);
		return pilha;		
}
//PUSH(x, S): coloca um elemento no topo da pilha
struct descritor_pilha* push(struct descritor_pilha* pilha, int novaChave){
		struct nodo* novoNodo = makeNode(novaChave);
		struct nodo *topo = pilha->topo;
		novoNodo->proximo=topo;
		pilha->topo = novoNodo;
		pilha->tamanho++;
		printf("PUSH PILHA com elemento %d\n",pilha->topo->chave);
		return pilha;		
}
//EMPTY(S): retorna verdadeiro se a pilha estiver vazia, falso caso contrário
int empty(struct descritor_pilha* pilha){
	struct nodo* topo = pilha->topo;
	if(topo == NULL)
		return 1;
	else
		return 0;
}
//SIZE
int size(struct descritor_pilha * pilha){
	return pilha->tamanho;	
}
