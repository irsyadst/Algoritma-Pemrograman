#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cout << "Jumlah Anak Ayam : ";
    cin >> n;

    for(i=n; i>=2; i--){
        cout << "Anak Ayam Turun " << i << " Mati Satu Tinggal " << i-1 << endl;
    }
    cout << "Anak Ayam Turun 1, Mati Satu Tinggal Induknya";
    return 0;
}
