#include <iostream>
using namespace std;
int main()
{
    int n,a,b,mod,c,x;
    cin>>n;
    int arr[n];
    for(a=0;a<n;a++){
        cin>>arr[a];
    }
    mod=arr[0],c=1;
    for(a=0;a<n-1;a++){
        if(arr[a]>0){
            x=1;
            for(b=a+1;b<n;b++){
                if(arr[a]==arr[b]){
                    arr[b]=0;
                    x=x+1;

                }
            }
            if(x>1){
                c=x;
                mod=arr[a];
            }
            else{
                if(x==c){
                    if(arr[a]>mod){
                        c=x;
                        mod=arr[a];
                    }
                }
            }
        }
    }
    cout<<mod<<endl;
    return 0;
}
