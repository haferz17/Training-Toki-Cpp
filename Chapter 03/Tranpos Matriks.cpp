#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b,c;
    for(b=0;b<3;b++){
        for(c=0;c<3;c++){
            cin>>a[b][c];
        }
    }
    for(b=0;b<3;b++){
        for(c=0;c<3;c++){
            cout<<a[c][b];
            if(c!=2)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
