#include <iostream>

using namespace std;

int main()
{
 cout << "    Program C++ Deret Angka Genap    " << endl;
 cout << "=====================================" << endl;
 cout << endl;

 int a, i;

 cout << "Input angka akhir: ";
 cin >> a;

 for (i=2; i<=a; i++) {
   if (i % 2 == 0) {
     cout << i << " ";
   }
 }

 cout << endl;
 return 0;
}
