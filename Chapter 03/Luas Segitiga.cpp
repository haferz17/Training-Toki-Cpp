#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A,T;
    cin>>A>>T;

    double luas = 0.5*A*T;
    cout<<setiosflags(ios::fixed);
    cout<<setprecision(2)<<luas<<endl;

    return 0;
}
