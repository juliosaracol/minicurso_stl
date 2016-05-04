class ContaBancaria {
	int agencia, conta;
	float saldo;
	public: //O construtor eh uma funcao publica...
	ContaBancaria ( int ag, int cnt ) {
		agencia = ag;
		conta = cnt;
		saldo = 0.0;
	}
/* Essas funcoes abaixo sao publicas e permitem apenas obter o valor das variaveis, mas sem possibilidade de edicao */
	public:
	int getAgencia(void){
		 return agencia; 
	}
	int getConta(void) { 
		return conta; 
	}
	float getSaldo(void){
		 return saldo;
	}
/* Agora, somente o saldo pode ser alterado. */
	public:
		void setSaldo ( float novo_saldo ) { 
			saldo = novo_saldo;
		}
		void saque ( float valor ) {
			if ( saldo >= valor ){
				saldo -= valor;
			}
		}
		void deposito ( float valor ){
			saldo += valor;
		}
};
#include <iostream>
using namespace std;
int main () {
ContaBancaria teste ( 1234, 99999 );
cout << "AG: " << teste.getAgencia() << " ,CNT: " << teste.getConta() << endl;
teste.deposito( 100.0 ); 
teste.saque ( 50.0 );
cout << "SALDO: " << teste.getSaldo();
/* A saida sera:
AG: 1234, CNT: 99999
SALDO: 50.0
*/
}
