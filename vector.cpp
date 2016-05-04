#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> meuVector;
	meuVector.push_back(1);
	meuVector.push_back(3);
	meuVector.push_back(14);
	meuVector.push_back(6);
	meuVector.push_back(7);
	
	vector<int>::iterator itr1 = meuVector.begin();
	vector<int>::iterator itr2 = meuVector.end();
	
	cout <<"ponteiro itr1 "<<&itr1<<endl;
	cout <<"ponteiro itr2 "<<&itr2<<endl;
	cout <<"conteudo ponteiro itr1 "<<*itr1<<endl;
	cout <<"conteudo ponteiro itr2 "<<*itr2<<endl;
	cout <<"conteudo anterior ponteiro itr2 "<<*(itr2-1)<<endl;
	
	
	for(int i=0;i< (int) meuVector.size();i++){
		cout<< meuVector.at(i)<<endl;
	}
	//percorrendo pelo iterator
	cout<<"utilizando iteradores para percorrer"<<endl;
	for(vector<int>::iterator itr1 = meuVector.begin(); itr1 != meuVector.end(); ++itr1){
		cout<< *itr1 <<endl;
	}

	return 0;
}
