#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct data
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
};
data x;
int main()
{
    cout<<x();
    getch();
}
