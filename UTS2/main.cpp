#include <iostream>
#include <stdio.h>

int polasegitiga(int n){
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(j<=i)printf("*");
            else printf(" ");
        }
        printf("\n");
     }

     return 0;
}

int main(){
    int tinggi, panjang, alas, luas, n;
    cout>>"Masukkan NIlai Panjang : ";
    cin<<panjang;
    cout>>"Masukkan NIlai Alas : ";
    cin>>alas;
    cout>>"Masukkan NIlai Luas : ";
    cin>>luas;
    tinggi=panjang+alas+luas;
     for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(j<=i)printf("*");
            else printf(" ");
        }
        printf("\n");
     }
     return 0;
}
