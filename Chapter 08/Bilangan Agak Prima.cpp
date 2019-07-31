#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,a,c,d=0;
    cin>>n;
    int b[n];
    for(a=0;a<n;a++){
        cin>>b[a];
    }
    for(c=0;c<n;c++){
        for(a=2;a<=b[c]>>1;a++){
            if(b[c]%a==0)d++;
        }
        if(d<=2)cout<<"YA";
        else cout<<"BUKAN";
        d=0;
        cout<<endl;
    }
    return 0;
}

