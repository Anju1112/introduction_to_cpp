#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int flag;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
               break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}