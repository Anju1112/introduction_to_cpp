#include<iostream>
using namespace std;
int main()
{
int savings;
cin>>savings;
if(savings>5000)
{
    if(savings>10000)
    {
        cout<<"roadtrip with sneha\n";
    }
    else
    {
        cout<<"shopping with sneha\n";
    }
    
}
else if(savings>2000)
{
    cout<<"preeti";
}
else
{
    cout<<"friends";
}
}