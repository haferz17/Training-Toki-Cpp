#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c=0;
    string x="0123456789";
    cin>>n;

    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            cout<<x[c];
            c++;
            if(c==x.length())c=0;
        }
        cout<<endl;
    }
    return 0;
}
