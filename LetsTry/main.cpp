#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int>nim={2,2,1,1,1,0,2,0,4,9};
    cout<<"NIM : ";
    for(int i=0;i<10;i++){
    cout<<nim[i];
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<10;i++){
    cout<<nim[i]<<" ";
    }
    for(int j=1;j<10;j++){
    cout<<endl<<nim[j];
    }
cout<<endl;
cout<<"\n\nIndeks ke 5 : "<<nim[5]<<endl;
cout<<endl;
cout<<"Merubah NIM akhir menjadi GENAP : "<<endl;
  if(nim[9]%2==1){
    nim[9]=nim[9]+1;
    }

    for(int i=0;i<10;i++){
    cout<<nim[i]<<" ";
    }
    for(int j=1;j<10;j++){
    cout<<endl<<nim[j];
    }
cout<<endl;
cout<<"Menambahkan awal NIM dengan 62 "<<endl;
    nim.insert(nim.begin (),62);
    for(int i=0;i<11;i++){
    cout<<nim[i]<<" ";
    }
    for(int j=1;j<11;j++){
    cout<<endl<<nim[j];
    }
    cout<<"\n\n"<<endl;
    return 0;
}
