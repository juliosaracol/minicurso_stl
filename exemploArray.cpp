#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>
//necessário acrescentar o comando na compilação -std=c++11 
using namespace std;

int main()
{
    array<int, 4> a1{ {3,6,1,8} };    
    array<int, 3> a2 = {1, 2, 3};
    array<string, 2> a3 = { {string("a"), "b"} };
	cout<<"antes do sort"<<endl;
	for(int i=0;i<a1.size();i++)
        cout << a1[i] << ' ';
    sort(a1.begin(), a1.end());
	cout<<endl<<"depois do sort"<<endl;
	for(int i=0;i<a1.size();i++)
        cout << a1[i] << ' ';
    cout<<endl<<"array reverso"<<endl;
    reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl<<"array string"<<endl; 
    for(auto& s: a3)
        cout << s << ' ';
}
