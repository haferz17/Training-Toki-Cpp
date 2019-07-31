#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},b,c,d=0;
    cin>>c;
        do{
            for(b=0;b<5;b++){
                cout<<a[b];
            }
            d++;
        }
        while(d<c);

    return 0;
}
