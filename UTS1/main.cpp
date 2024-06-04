#include <iostream>

using namespace std;

int main()
{
    int a,b,c,y;
    cout << "Masukkan 3 Digit NIM Terakhir : ";
    cin >> a;
    cout << "Masukkan 3 Digit NIM Terakhir : ";
    cin >> b;
    cout << "Masukkan 3 Digit NIM Terakhir : ";
    cin >> c;
    y=a+b*c;
    cout<<y<<endl;
    if(y<20&&y!=25&&y!=26){
        cout<<"Baik Sekali";
    }else if(y>=20&&y!=25&&y!=26){
        cout<<"Sangat Baik Sekali";
    }else if(y==25||y==26){
        cout<<"Cukup Sama Baik";
    }
    return 0;
}
