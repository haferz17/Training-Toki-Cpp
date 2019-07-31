#include <iostream>
using namespace std;
int main()
{
    int n,m,a,b,x[50][50];
    cin>>n>>m;
    for(a=1;a<=n;a++){
        for(b=1;b<=m;b++){
            cin>>x[a][b];
        }
    }
    for(a=1;a<=m;a++){
        for(b=n;b>=1;b--){
            cout<<x[b][a];
            if(b!=1)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
