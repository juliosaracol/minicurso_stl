#include <deque>
#include <iostream>

using namespace std;

int main() {
	 deque<int> d1(3);
	 deque<int>::iterator it;	 	 // Iterador
	 // Atribui valores com a notação de array
	 d1[0] = 3; d1[1] = 1; d1[2] = 2;
	 cout << "Deque d1: ";
	 for (it = d1.begin();it != d1.end();++it) 
		cout << *it << " ";
	 deque<int> d2(d1);		 // Cria a deque d2
	 cout << "  Deque d2: ";
	 for (it = d2.begin();it != d2.end();++it) cout << *it << "  ";
	 return 0; 
}
