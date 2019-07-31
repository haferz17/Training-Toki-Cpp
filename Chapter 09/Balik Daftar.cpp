#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a[100],b,c=0;
    while(!cin.eof()){
        cin>>a[c];
        c++;
    }
    for(b=c-2;b>=0;b--){
        cout<<a[b]<<endl;
    }
    return 0;
}
