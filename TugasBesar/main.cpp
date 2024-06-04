#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int jml_beli, bayar,diskon,jumlah[50], harga[50], sub_total[50];
	string nama_barang[50];
	float total;
    time_t a=time(0);
    string b=ctime(&a);
int barang(int jml_beli){
    for (int i=0; i<jml_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;

		cout<<"Nama Barang : ";
		cin.get();
		getline(cin, nama_barang[i]);
		cout<<"Harga       : ";
		cin>>harga[i];

		cout<<"Jumlah      : ";
		cin>>jumlah[i];

		sub_total[i]=jumlah[i]*harga[i];
		total+=sub_total[i];
	}
}
int struk(int jml_beli){
    cout<<endl;
	cout<<"\t\t\tWARUNG SEMBAKO ITTP"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"Jl. DI Panjaitan No.128, Karangreja, Purwokerto Kidul,\nKec. Purwokerto Sel., Kabupaten Banyumas, Jawa Tengah 53147\n";
	cout<<"--------------------------------------------------------------"<<endl;
    cout<<b;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jml_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_total[i]<<endl;
	}
	cout<<"--------------------------------------------------------------"<<endl;
}
int total_diskon (int total){
    if (total>=100000){
		diskon=0.06*total;
	} else if (total>=50000){
		diskon=0.04*total;
	}else if (total>=25000){
		diskon=0.02*total;
	}else {
		diskon=0;
	}
}
void tampil_harga(){
    cout<<"Jumlah Bayar : Rp."<<total<<endl;
	cout<<"Diskon       : Rp."<<diskon<<endl;
	cout<<"Total Bayar  : Rp."<<total-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar;
	cout<<"Kembali      : Rp."<<(bayar-(total-diskon))<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"Terimakasih Atas Kunjungan Anda\nFollow IG @WarungITTP\n"<<b;
}
int main() {
    system("color 70");
	cout<<"PROGRAM KASIR SEDERHANA"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Jenis Barang : ";
	cin>>jml_beli;

    barang(jml_beli);
    system("cls");
    struk(jml_beli);
    total_diskon(total);
    tampil_harga();

}
