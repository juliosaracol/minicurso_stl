#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	map<string, int> digitos;
	string s;

	digitos["zero"] = 0;
	digitos["um"] = 1;
	digitos["dois"] = 2;
	digitos["três"] = 3;
	digitos["quatro"] = 4;
	digitos["cinco"] = 5;
	digitos["seis"] = 6;
	digitos["sete"] = 7;
	digitos["oito"] = 8;
	digitos["nove"] = 9;

	cout<<"digite cardinal de 0 até 9 (crtl+c para sair)"<<endl;
	while (cin >> s) {
		cout << digitos[s] << endl;
		cout<<"digite cardinal de 0 até 9 (crtl+c para sair)"<<endl;
	}
	
	return 0;
}
