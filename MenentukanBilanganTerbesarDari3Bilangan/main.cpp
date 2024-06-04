#include <iostream>
using namespace std;
int main (){

    float bil1, bil2, bil3;

    cout<<"Input Bilagan Pertama : ";
    cin>>bil1;
    cout<<"Input Bilagan Kedua   : ";
    cin>>bil2;
    cout<<"Input Bilagan Ketiga  : ";
    cin>>bil3;

    float max; //penampung nilai terbesar

    if(bil1 >= bil2 && bil1 >= bil3){
        max = bil1;
        }
    else if(bil2 >= bil3 && bil2 >= bil1){
        max = bil2;
        }
    else{
        max = bil3;
        }

    cout<<"Bilagnan terbesar adalah : "<<max;

    return 0;
    }
