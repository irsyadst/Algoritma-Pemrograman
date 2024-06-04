#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int  x,y,z;
lagi :
    cout << "Masukan 3 Nim terakhir" << endl;
    cout << "Angka Pertama : ";
    cin >> x;
    cout << "Angka Kedua : ";
    cin >> y;
    cout << "Angka Ketiga : ";
    cin >> z;
    cout << endl;
    if(x>9 || y>9 || z>9){
        cout << "Input tidak boleh lebih dari satu digit.\n";
        system("pause");
        system("cls");
        goto lagi;
    } else {
        cout << "Hasil Penjumlahan dari "; cout << x; cout << " + "; cout << y; cout << " + "; cout << z; cout << " = ";
        cout << x + y + z << endl;
        cout << "Hasil Perkalian dari "; cout << x; cout << " * "; cout << y; cout << " * "; cout << z; cout << " = ";
        cout << x * y * z << endl;
        cout << "Hasil Pengurangan dari "; cout << x; cout << " - "; cout << y; cout << " - "; cout << z; cout << " = ";
        cout << x - y - z << endl;
    }
    return 0;
}
