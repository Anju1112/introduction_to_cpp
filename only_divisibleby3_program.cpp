#include<iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cin>>num;
    int m=num/2;
    for(int i=2;i<=m;i++)
    {
        if(m%i==0)
        {
            cout<<"Not a prime number";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"prime number";
    }
    
}