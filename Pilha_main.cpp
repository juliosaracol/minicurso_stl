//Arquivo inicial de c++ pilha
#include <cstdlib> //PARA O USO DE exit(1)
#include <iostream>
#include "Pilha.h"
using namespace std;
int main()
{
	char opcao;
    Pilha *pilha;
    int elemento;
    cout << "######MINHA PILHA EM C++ ##############" << endl;
	cout << "digite o numero para o tamanho da pilha:";
	cin >> elemento;
	pilha = new Pilha(elemento);
	while(opcao != 's'){
		cout << "digite sua opcao::: i:insere d:delete t:topo s:sair" << endl;
		cin >> opcao;
		switch(opcao){
			case 'i':{
				cout << "digite o elemento a inserir" << endl;
				cin >> elemento;
				pilha->pushPilha(elemento);
				cout << "elemento inserido com sucesso"<< endl;
				break;
			}
			case 'd':{
				cout << "elemento deletado com sucesso e: "<< pilha->popPilha()<< endl;
    			break;
			}
			case 't':
			{
				if((elemento = pilha->topPilha()) != 0){
					cout << "topo da pilha eh: "<< elemento << endl;
				}else{
					cout << "pilha vazia" <<endl;
				}
				break;
			}
			case 's':
			default:
				exit(1);
		}
	}
    delete pilha;
    return 0;
}

