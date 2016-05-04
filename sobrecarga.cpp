// strop2.cpp
# include <iostream>
# include <stdlib.h>
# include <string.h>
using namespace std;
class strop {
 char value[12];
 public:
 strop();
 strop(const char *s);
 long operator+ (strop b);
 long operator- (strop b);
 long operator* (strop b);
};

//----------------polimorfismo------------------//
strop::strop() {
 value[0] = 0;
}
strop::strop(const char *s) {
 strncpy (value, s, 11);
 value[11] = 0;
}
//------sobrecarga de métodos----------------//
long strop :: operator+ (strop b) {
 return ( atol(value) + atol(b.value) );
}
long strop :: operator- (strop b) {
 return ( atol(value) - atol(b.value) );
}
long strop :: operator* (strop b) {
 return ( atol(value) * atol(b.value) );
}



int main () {
 strop a = "1000";
 strop b = "6";
 cout << "\n a + b == " << (a + b);
 cout << "\n a - b == " << (a - b);
 cout << "\n a * b == " << (a * b);
 return 0;
} 
