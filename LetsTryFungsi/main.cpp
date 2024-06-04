#include <iostream>

using namespace std;
string arr[5]={"Rupiah","Ringgit","Dollar","Pounds","Euro"};
int tampil_array(){
     for (int h = 0; h<5; h++)
	{
		cout << "\narr[" << h << "]= " << arr[h];
	}
	return 0;
}int ubah(string ganti){
    for (int g = 0; g<5; g++)
	{
		if (arr[g] == ganti)
		{
			cout << "Masukka nilai baru = "; cin >> arr[g];
		}
	}
}
int main()
{
    string ganti;
    tampil_array();
	cout << "\n\nMasukkan nilai data yang akan diubah = "; cin >> ganti;
	ubah(ganti);
	cout << "\nData setelah diubah";
	tampil_array();
    return 0;
}
