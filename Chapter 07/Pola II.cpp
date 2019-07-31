#include <iostream>
using namespace std;
int main()
{
    int N,a,b;
    cin>>N;
    for(a=0;a<N;a++){
        for(b=a;b<N-1;b++){
            cout<<" ";
        }
        for(b=a+1;b>0;b--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
