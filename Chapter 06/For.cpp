#include <iostream>
using namespace std;
int main()
{
    int N,i,jumlah=0;
    cin>>N;
    int a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=0;i<N;i++){
        jumlah=jumlah+a[i];
    }
    cout<<jumlah<<endl;
    return 0;
}
