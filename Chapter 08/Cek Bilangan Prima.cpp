#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,a,c;
    bool d;
    cin>>n;
    int b[n];
    for(a=0;a<n;a++){
        cin>>b[a];
    }
    for(c=0;c<n;c++){
        d=true;
        if(b[c]==1)d=false;
        else{
            for(a=2;a<sqrt(b[c])+1;a++){
                if(b[c]%a==0)d=false;
            }
        }
        if(d==true)cout<<"YA";
        else cout<<"BUKAN";
        cout<<endl;
    }
    return 0;
}
