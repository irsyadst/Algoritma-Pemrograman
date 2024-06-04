#include <iostream>
using namespace std;

int main(){
	float r,t,v;
	float phi=3.14;

  cout << "    Program C++ Menghitung Volume Tabung   " << endl;
  cout << "===========================================" << endl;
  cout << endl;

	cout<<"Masukan Jari-jari : ";
	cin>>r;

	cout<<"Masukan Tinggi    : ";
	cin>>t;

	v=(phi*t*(r*r));

	cout<<endl;
	cout<<"Volume Tabung	  : "<<v<<endl;
}
