#include <iostream>
using namespace std;
int main()
{
    int a[100],b=0,c,d=0;
    while(!cin.eof()){
        cin>>a[b];
        b++;
    }
    for(c=0;c<b-1;c++){
        d=d+a[c];
    }
    cout<<d<<endl;
    return 0;
}
