struct nodo{
	struct nodo* proximo;
	int chave; 
};

struct descritor_pilha{
	int tamanho;
	struct nodo* topo;
};

//MAKE:cria o descritor da pilha
struct descritor_pilha* make(void);
//MAKENODE : cria um nodo da pilha
struct nodo* makeNode(int chave);
//MAKENULL(S): elimina todos os elementos da pilha
struct descritor_pilha* makeNull(struct descritor_pilha* pilha, int novaChave);
//TOP(S): retorna o elemento no topo da pilha, sem retirá-lo no entanto
struct nodo* top(struct descritor_pilha* pilha);
//POP(S): apaga o elemento no topo da pilha; em algumas implementações, POP(S) pode retornar também o elemento no topo da pilha
struct descritor_pilha* pop(struct descritor_pilha* pilha);
//PUSH(x, S): coloca um elemento no topo da pilha
struct descritor_pilha* push(struct descritor_pilha* pilha, int novaChave);
//EMPTY(S): retorna verdadeiro se a pilha estiver vazia, falso caso contrário
int empty(struct descritor_pilha* pilha);
//SIZE
int size(struct descritor_pilha* pilha);
