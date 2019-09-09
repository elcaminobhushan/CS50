#include <iostream>

using namespace std;
int min(int d,int b)
{
    int result;
    if(d>b)
    {
     result=b;   
    }
    else{
    result=d;
        
    }
    
    return result;
}

int main() {    
  int e,g;
    int a[6]={12,4,35,23,87,1};
    for(int i=0;i<6;i++)
    {  
        for(int j=i+1;j<6;j++)
        {
            e=min(a[i],a[j]);
            if(e!=a[i])
            {
                g=a[j];
                a[j]=a[i];
                a[i]=g;
            }
            
            
        }
        
    }
    cout<<"SORTED LIST IS :";
    for(int k=0;k<6;k++)
    {
        cout<<a[k];
        if(k<5)
        cout<<",";
        
    }
    
}  
