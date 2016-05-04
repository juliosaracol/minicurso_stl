#include <iostream>
using namespace std;

class conta{
	protected:
		string nome;
		int numero;
		float saldo;
	public:
		conta(float saldo, string nome, int numero){
			this->numero 	= numero;
			this->saldo		= saldo;
			this->nome		= nome;
		}
		conta(){
		}
		~conta(){
		}
		float getSaldo(){
			return this->saldo;
		}
		void getPrint(){
			cout<<"CONTA-SIMPLES"<<endl;
			cout<<"Conta número:"<<this->numero<<endl;
			cout<<"NOME:"<<this->nome<<endl;
			cout<<"saldo:"<<this->saldo<<endl;
		}
};

class contaCorrente : public conta{
		protected:
				float limite;
		public:
				contaCorrente(float saldo,string nome, int numero, float limite){
					this->saldo = saldo;
					this->nome	 = nome;
					this->numero = numero;		 
					this->limite = limite;		 
				}
				float getSaldo(void){
					return (this->saldo+this->limite);
				}
				
				float getLimite(void){
					return this->limite;
				}
				void getPrint(void){
					cout<<"CONTA-CORRENTE"<<endl;
					cout<<"Conta número:"<<this->numero<<endl;
					cout<<"NOME:"<<this->nome<<endl;
					cout<<"saldo:"<<this->saldo<<endl;
					cout<<"limite:"<<this->limite<<endl;
				}
};

class contaPoupanca :  public conta{	
	public: 
	 contaPoupanca(float saldo,string nome, int numero){
		 this->saldo = saldo;
		 this->nome	 = nome;
		 this->numero = numero;		 
	 }
	 ~contaPoupanca(){}
	 void getPrint(void){
		cout<<"CONTA-CORRENTE"<<endl;
		cout<<"Conta número:"<<this->numero<<endl;
		cout<<"NOME:"<<this->nome<<endl;
		cout<<"saldo:"<<this->saldo<<endl;		
	}
};


int main(){
	cout<<"OBJETO CONTA"<<endl;
	float saldoInicio = 100.50; 
	conta *contaNormal = new conta(saldoInicio,"julio",12345);
	contaNormal->getPrint();
	cout<<"OBJETO POUPANCA"<<endl;
	float saldoInicioP = 100000; 
	contaPoupanca *contaPoupancaNova = new contaPoupanca(saldoInicioP,"Maria",5436);
	contaPoupancaNova->getSaldo();	
	cout<<contaPoupancaNova->getSaldo()<<endl;	
	cout<<"OBJETO CONTA-CORRENTE"<<endl;
	contaCorrente *contaCorrenteNova = new contaCorrente(saldoInicioP,"Maria",5436,1000);
	cout<<contaCorrenteNova->getSaldo()<<endl;	
	cout<<contaCorrenteNova->getLimite()<<endl;	
	contaCorrenteNova->getPrint();
	return 0;
}
