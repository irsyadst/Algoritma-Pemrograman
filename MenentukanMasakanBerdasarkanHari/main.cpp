#include <iostream>
using namespace std;

int main()
{
    int hari;
    cout << "masukkan nomor hari (1..7) : ";
    cin >> hari;

    switch(hari){
    case 1 :
        cout << "Ibu Memasak Rendang";
        break;
    case 2 :
        cout <<"Ibu Memasak Rendang";
        break;
    case 3 :
        cout <<"Ibu Memasak Sate";
        break;
    case 4 :
        cout <<"Ibu Memasak Sate";
        break;
    case 5 :
        cout <<"Ibu Memasak Rawon";
        break;
    case 6 :
        cout <<"Ibu Memasak Rawon";
        break;
    case 7 :
        cout <<"Ibu Memasak Rawon";
        break;
    default:
        cout << "Input Yang anda Masukkan Salah";
    }
    return 0;
}
