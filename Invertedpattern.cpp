#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int i=m;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
          cout<<j<<" ";     
        }
        cout<<"\n";
    }
}

/*It took 25 minutes to try and solve this problem*/