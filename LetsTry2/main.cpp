#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int x[3][4]={{0,1,1,0},{1,0,0,1},{0,1,0,1}};
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<x[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
