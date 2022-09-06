#include<iostream>
using namespace std;

int main()
{
    int a,b,add,sub,mul;
    float div;

    cout<<endl<<"Enter a no:";
    cin>>a;
    cout<<endl<<"Enter another no :";
    cin>>b;

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/(float)b;

    cout<<endl<<"ADDITION OF a+b="<<add;
    cout<<endl<<"SUBSTRACTION OF a-b ="<<sub;
    cout<<endl<<"MULTIPLICATION of a*b ="<<mul;
    cout<<endl<<"DIVISION of a/b= "<<div;

    return 0;
}
