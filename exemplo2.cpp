//Exemplo2.cpp
//Nosso primeiro programa em C++
#include <iostream>

using namespace std;

int main ()
{
	string nome;
	char sobrenome[256];
	cout << "digite seu nome" <<endl;
	cin >> nome;
	cout << "digite seu sobrenone" <<endl;
	cin >> sobrenome;
	cout << "Hello "<<nome<<" "<<sobrenome<<" !"<<endl;
	return 0;
}
