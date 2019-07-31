#include <iostream>
using namespace std;
int main()
{
    int n,k,a;
    cin>>n>>k;
    for(a=1;a<=n;a++){
        if(a%k!=0) cout<<a;
        else cout<<"*";
        if(a!=n) cout<<" ";
    }
    cout<<endl;
    return 0;
}
