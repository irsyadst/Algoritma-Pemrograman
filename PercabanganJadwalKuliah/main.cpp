#include <iostream>

using namespace std;

int main()
{
    cout << "Menentukan Ganjil Genap dari 1 digit NIM Akhir" << endl;
    int a, pilih;
    cout << "Masukkan 1 Digit NIM Akhir anda = ";
    cin  >> a;
    cout    << "Pilih Jenis Kelamin anda : " << endl;
    cout    << "1. Perempuan" << endl;
    cout    << "2. Laki-laki" << endl;
    cout    << "Jenis Kelamin anda : ";
    cin     >> pilih;

        if(a%2 == 0 && pilih == 1){
            cout<< "Masuk Kuliah Selasa"<<endl;
        }
        else if(a%2 == 1 && pilih == 2){
            cout<< "Masuk Kuliah Senin"<<endl;
        }
        else if(a%2 == 0 && pilih == 2){
            cout<< "libur"<<endl;
        }
        else if(a%2 == 1 && pilih == 1){
            cout<< "libur"<<endl;
        }
        else
        cout << "input salah"      << endl;




    return 0;
}
