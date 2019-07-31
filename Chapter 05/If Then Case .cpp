#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N/10<=0)
        cout<<"satuan"<<endl;
    else if(N/10<=9)
        cout<<"puluhan"<<endl;
    else if(N/10<=99)
        cout<<"ratusan"<<endl;
    else if(N/10<=999)
        cout<<"ribuan"<<endl;
    else
        cout<<"puluhribuan"<<endl;

    return 0;
}
