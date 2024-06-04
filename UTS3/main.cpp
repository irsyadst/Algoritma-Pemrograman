#include <iostream>
using namespace std;

int main() {

int t ,p,a,l;

    cout << "Masukkan nilai Panjang : ";
    cin  >> p ;
    cout << "Masukkan nilai Alas    : ";
    cin  >> a ;
    cout << "Masukkan nilai Luas    : ";
    cin  >> l ;
    t=p+a+l;
    cout << "Maka Hasil dari tinggi : "<<t<<endl;

    for(int i=1;i<=t;i++){
        for(int j=1;j<=i;j++){
        cout<<(" ");
        }
    for (int j=1;j<=t4-i+1;j++)
        cout<<("*");
        cout<< "\n";
     }
     return 0;
}
