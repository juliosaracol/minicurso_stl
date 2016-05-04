#include <iostream>
#include "Personagem.cpp"
using namespace std;

class Heroi: public Personagem{
public:
	int vida;
	int idade;
	int magia;
	int posicao;
public:
	Heroi( ){
		this->vida = 100;
		this->idade = 20;
		this->magia= 1000;
		this->posicao=0;
	}
	~Heroi( ){
	}
	void andar(void){
		Personagem::andar();	
		cout<<"Personagem andando"<<endl;
		this->posicao+=100;	
	}
	void correr(void){
		cout<<"Personagem andando"<<endl;
		this->posicao+=300;	
	}
	int getPosicao(void){
		cout<<"Posicao:"<<this->posicao<<endl;
		return this->posicao;	
	}
};


int main(){
		Personagem *p1 = new Personagem();
		Heroi p2;
		p1->andar();
		p1->andar();
		p1->getPosicao();
		p2.andar();
		p2.getPosicao();
		p2.correr();
		p2.getPosicao();
	return 0;
}
