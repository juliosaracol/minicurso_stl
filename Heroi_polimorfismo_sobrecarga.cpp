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
		cout<<"Personagem andando"<<endl;
		this->posicao+=100;	
	}
	void correr(void){
		cout<<"Personagem andando"<<endl;
		this->posicao+=300;	
	}
	void correr(int distancia){
		cout<<"Personagem andando"<<endl;
		this->posicao+=distancia;	
	}
	int getPosicao(void){
		cout<<"Posicao:"<<this->posicao<<endl;
		return this->posicao;	
	}
	int getPosicao(string nome){
		cout<<"Posicao do "<<nome<<" eh: "<<this->posicao<<endl;
		return this->posicao;	
	}
	
	int operator +(Heroi *p1){
		return this->posicao + p1->getPosicao();
	}
};


int main(){
		Heroi *p1 = new Heroi();
		Heroi p2;
		p1->andar();
		p1->andar();
		p1->getPosicao();
		p2.andar();
		p2.getPosicao();
		p2.correr();
		p2.getPosicao();
		p2.correr(10000);
		p2.getPosicao("Heroi");
		cout<<"Resultado do operator +:"<< p2.operator +(p1);
		cout<<"Resultado do operator +:"<< p2+p1;
	return 0;
}
