#include <iostream>
using namespace std;
int main()
{
    int x1,x2,y1,y2,ax,bx,ay,by;
    cin>>x1>>y1>>x2>>y2;
    if(x1>x2){
        ax=x1;
        bx=x2;
    }
    else{
        ax=x2;
        bx=x1;
    }
    if(y1>y2){
        ay=y1;
        by=y2;
    }
    else{
        ay=y2;
        by=y1;
    }
    cout<<(ax-bx)+(ay-by)<<endl;

    return 0;
}
