//Exemplo1.1.cpp

//Exemplo do programa em C
#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[250];
    printf("digite seu nome\n");
	scanf("%s[^\n]", nome);
	printf("Hello %s!",nome);
	return 0;
}
