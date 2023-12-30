#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<"1 2 ";
    for(int i=3;i<=num;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}