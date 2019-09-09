#include <iostream>

using namespace std;

int main() {
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int num=8,b;
    int strt=a[0],mid,end=a[9];
    mid=(strt+end)/2;
    while(num!=mid && strt!=end)
    {
     if(num>mid)
    {
        strt=mid+1;
        
       
    }
    else if(num<mid)
    {
        end=mid-1;
        
    }
    mid=(strt+end)/2;
    cout<<strt<<endl;
    cout<<end<<endl;
    cout<<mid<<endl;
  
  
    
    
  
    }
    if(mid==num)
    {
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    
    
    
    
}
