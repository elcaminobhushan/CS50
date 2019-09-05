#include <iostream>
using namespace std;
int main()
{   char plaintext[5]={'H','E','L','L','O'};
    cout<<"PLAINTEXT : ";
    for (int j=0;j<5;j++)
    {
    cout<<plaintext[j] ;
    }
    cout<<"\n";
    cout<<"CYPHERTEXT : ";
    for(int i=0;i<5;i++)
    {
    char l=plaintext[i];
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
