#include <iostream>
using namespace std;
int main()
{
    int i,j;
    string x[2][3]={{"jos","dani","naco"},{"nugi","sabana","nasa"}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
