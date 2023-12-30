#include<iostream>
using namespace std;
int main()
{   int a,b;
    cin>>a>>b;
    char sign;
    cin>>sign;
    switch(sign)
    {
        case '+':
        cout<<"addition "<<a+b;
        break;
        case '-':
        cout<<"Substraction "<<a-b;
        break;
        case '*':
        cout<<"multiplication "<<a*b;
        break;
        case '/':
        cout<<"division "<<a/b;
        break;
        default:
        cout<<"invalid sign";
    }
}