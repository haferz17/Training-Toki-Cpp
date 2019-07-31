#include <iostream>
using namespace std;
int main()
{
    int n,m,p,a,b,x[50][50],y[50][50],c;
    cin>>n>>m>>p;
    for(a=1;a<=n;a++){
        for(b=1;b<=m;b++){
            cin>>x[a][b];
        }
    }
    for(a=1;a<=m;a++){
        for(b=1;b<=p;b++){
            cin>>y[a][b];
        }
    }
    for(a=1;a<=m;a++){
        for(b=1;b<=n;b++){
            cout<<x[b][a];
        }
        for(c=1;c<=p;c++){
            cout<<y[c][a];
        }
        cout<<endl;
    }
}
