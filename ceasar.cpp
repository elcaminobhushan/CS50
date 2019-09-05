#include <iostream>
using namespace std;
int main()
{   char a[5]={'H','E','L','L','O'};
    for(int i=0;i<5;i++)
    {
    char l=a[i];
    int k;
    cin >> k;
    char c='A';
    int g=l+k;
    if(g>90)
    {
        int b=(((g))-91)%26;
    cout<<char(c+b);
        
    }
    else
    {
        cout<<char(g);
    }   
}}

