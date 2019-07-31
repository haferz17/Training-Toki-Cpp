#include <iostream>
using namespace std;
int main()
{
    int N,a,b,tmp;
    cin>>N;
    int z[N];
    for(a=0;a<N;a++){
        cin>>z[a];
    }
    for(a=0;a<N;a++){
        for(b=0;b<N;b++){
            if(z[a]<z[b]){
                tmp = z[a];
                z[a] = z[b];
                z[b] = tmp;
            }
        }
    }
    cout<<z[N-1]<<" "<<z[0]<<endl;
    return 0;
}
