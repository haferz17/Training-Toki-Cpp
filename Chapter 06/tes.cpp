#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char a[100],b;

    for(b=0;b<3;b++){cin.getline(a,sizeof(a));}
    for(b=0;b<3;b++){cout<<a;}

    getch();

}
