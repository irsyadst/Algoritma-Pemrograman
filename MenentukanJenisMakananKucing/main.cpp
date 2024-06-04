#include <iostream>

using namespace std;

int main()
{
    string angel="angel", nama;
    int berat;
    cout << "Masukkan Nama Kucing : ";
    cin >> nama;
    cout << "Masukkan Berat : ";
    cin >> berat;
    if(nama == angel && berat > 26){
        cout << "Makan Wellnes";
    }else if(berat > 28){
        cout << "Makan Whiskas";
    }else{
        cout << "Makan Proplan";
    }
    return 0;
}
