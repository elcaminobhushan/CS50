#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0 && n<24)
    {
    for(int i=1 ; i<=n ; i++)
    { 
        for(int j=0 ; j<(n-i) ; j++)
        {
            cout<<" ";
            
        }
    for(int k=1;k<=i;k++)
    {cout<<"*";}
    cout<<"\n";
    }
    }
    else
    {
        cout<<"INPUT VALUE BETWEEN 1 to 23";
    }

}
