#include <iostream>
using namespace std;

int main()
{
    ulang:
    int permen, harga = 2000;
    cout << "Masukan Jumlah Permen : ";
    cin >> permen;

    if(permen >=1 && permen !=3 ){
        cout << "Harga satuan : " << harga << endl;
        cout << "Total Harga : " << harga*permen;
    }else if(permen == 3){
        cout << "Harga satuan : " << harga << endl;
        cout << "Total Harga : 5000";
    }else{
        cout << "\nInput salah!" << endl;
        system("pause");
        system("cls");
        goto ulang;
    }
    return 0;
}
