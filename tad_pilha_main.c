//tad_pilha_man

#include <stdio.h>
#include <stdlib.h>
#include "tad_pilha.h"

int main(){

 struct descritor_pilha* minhaPilha = NULL;
 minhaPilha = make();
 push(minhaPilha,5);
 push(minhaPilha,25);
 push(minhaPilha,15);
 pop(minhaPilha);
 top(minhaPilha);


 return 0;
}
