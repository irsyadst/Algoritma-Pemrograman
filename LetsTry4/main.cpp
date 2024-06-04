#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int max=0;
    int x[3][4]={{1,1,1,0},{1,0,0,1},{0,1,0,2}};
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<x[i][j]<<" ";
        }
    cout<<endl;
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            max=x[i][j];
        }
    }
    cout<<"Nilai Maksimal : "<< max;
    return 0;
}
