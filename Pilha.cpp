#include "Pilha.h"
#include <stdlib.h>

Pilha::Pilha(){
    this->tamanho = 10;
    this->topo    = 0;
    this->vetor   = (int*)malloc(10 * sizeof(int));
}
Pilha::Pilha(int tamanho){
    this->tamanho = tamanho;
    this->topo    = 0;
    this->vetor   = (int*)malloc(tamanho * sizeof(int));
}
Pilha::~Pilha(){
}
void Pilha::pushPilha(int elemento){
    this->vetor[topo] = elemento;
    this->topo ++;
}
int Pilha::popPilha(void){
	if(this->topo > 0){
		int elemento;
		elemento = this->vetor[topo-1];
		this->topo --;
		return elemento;
	}
	return -1;
}
int Pilha::tamPilha(void){
	return this->tamanho;
}
int Pilha::topPilha(void){
	if(topo != 0){
		return this->vetor[topo-1];
	}else{
		 return 0;
	}
}
