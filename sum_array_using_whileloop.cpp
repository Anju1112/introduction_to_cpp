#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cin>>num;
    int i=0;
    while(i<=num)
    {
      sum=sum+i;
      i=i+1;
    }
    cout<<sum;

}