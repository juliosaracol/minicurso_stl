#include <set> 
#include <iostream> 

using namespace std;

int main(){ 
  set<unsigned> s; 
  s.insert(1); // s = {1} 
  s.insert(4); // s = {1, 4} 
  s.insert(3); // s = {1, 3, 4} 
  s.insert(1); // s = {1, 3, 4} 
  set<unsigned>::const_reverse_iterator sit (s.rbegin()), send(s.rend()); 
  for(;sit!=send;++sit) std::cout << *sit << std::endl; 
  return 0; 
}
