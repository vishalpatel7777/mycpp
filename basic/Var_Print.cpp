#include <iostream>
using namespace std;
int main() {
   int n = 10 ;
   int *p = &n;
   char a = 'A';
   string s = "Vishal";
   double d = 3.1234324134;
   float f = 3.1234324134;
   long l = 3.1234324134;
   long  double ld = 3.1234324134;
   bool b = true;
   wchar_t w = L'A';

    cout << "Here all numbers : " <<endl;
    cout << n <<"  " << p <<" " << a << " " << s << " " << f << "  " << d << " "<< l << "  " <<ld << " "<<b <<" " << w<<endl;
    cout<< "Pointer actual value : " << *p << endl;


    return 0;
}