//Exemplo 04 - Manipula ̧c ̃ao de strings
#include <iostream>

using namespace std;

int main (){

	string nome = "Bjarne";
	string sobrenome("Stroustrup");
	string completo = nome +' '+ sobrenome;
	cout << "Seu nome completo eh: " << completo << endl;
	return 0;
}
