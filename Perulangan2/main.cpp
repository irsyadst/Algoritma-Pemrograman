#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, x;
    double rerata, sum, n;

    cout << "Masukkan Jumlah Bilangan : ";
    cin >> n;

    sum = 0;

    for(i=1; i<=n; i++){
        cout << "Masukan Angka : ";
        cin >> x;
        sum = sum + x;
    }
    rerata = sum/n;
    cout << setiosflags(ios::fixed);
    cout << setprecision(1) << "Nilai Rata-Rata : " << rerata << endl;
}
