#include <iostream>
using namespace std;

class Personagem{
protected:
	int vida;
	int idade;
	int magia;
	int posicao;
public:
	Personagem( ){
		this->vida = 100;
		this->idade = 20;
		this->magia= 0;
		this->posicao=0;
	}
	~Personagem( ){
	}
	void andar(void){
		cout<<"Personagem andando"<<endl;
		this->posicao++;	
	}
	int getPosicao(void){
		cout<<"Posicao:"<<this->posicao<<endl;
		return this->posicao;	
	}

};

/*
int main(){
		Personagem *p1 = new Personagem();
		Personagem p2;
		p1->andar();
		p1->andar();
		p1->getPosicao();
		p2.andar();
		p2.getPosicao();
	return 0;
}
*/
