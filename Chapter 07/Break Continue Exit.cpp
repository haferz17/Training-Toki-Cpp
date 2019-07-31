#include <iostream>
using namespace std;
int main()
{
    int N,a;
    cin>>N;
    for(a=1;a<=N;a++){
        if(a%10==0)
            continue;
        else if(a>41){
            cout<<"ERROR"<<endl;
            break;
        }
        cout<<a<<endl;
    }
    return 0;
}
