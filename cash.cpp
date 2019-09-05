#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    a=n/25;
    b=(n%25)/10;
    c=((n%25)%10)/5;
    d=(((n%25)%10)%5)/1;
    cout<<(a+b+c+d);
    
    
}
