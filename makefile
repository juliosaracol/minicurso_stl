pilha_tad:
	gcc -c tad_pilha.c
	gcc tad_pilha_main.c tad_pilha.o -o tad_pilha
pilha_class:
	g++ -c Pilha.cpp
	g++ Pilha_main.cpp Pilha.o -o Pilha_class
clear:
	rm *.o
	rm Pilha_class
	rm tad_pilha
