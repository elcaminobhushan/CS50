#include <iostream>

using namespace std;

int main() {
    int d;
    cin>>d;
    int grid [5][5]={};
    
    int a=(d*d-1);
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        
        {
            if(i!=(d-1))
            {
            grid [i][j]=a;
            a=a-1;
            cout<<" "<<grid[i][j];
            }
            else
            {
                if(j==d-3 )
                {
                    grid [d-1][d-3]=1;
                    cout<<" "<<grid[d-1][d-3];
                   
                }
                else if(j==d-2)
                {
                     grid [d-1][d-2]=2;
                     cout<<" "<<grid[d-1][d-2];
                }
                else if(j==d-1)
                {
                    grid [d-1][d-1]=0;
                    cout<<" "<<grid[d-1][d-1];
                }
                else
                {
                   grid [i][j]=a;
            a=a-1;
            cout<<" "<<grid[i][j]; 
                }
                
            }
          
           
          
                
            
        }
        cout<<endl;
    }
    
    
    //WON                 WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    
    cout<<endl<<endl<<"GRIDWIN :"<<endl;
        int gridwon [5][5]={};
    int b=1,c=0;
    
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        {
            if(i!=d-1)
            {
            gridwon [i][j]=b;
            b++;
            
           cout<<" "<<gridwon[i][j];
            }
            else
            {
                if(j!=d-1)
                {
                       gridwon [i][j]=b;
            b++;
            cout<<" "<<gridwon[i][j];
            
            }
            else
            {
                gridwon [d-1][d-1]=0; 
                cout<<" "<<gridwon [d-1][d-1];
                
            }
                
            }
        }
        cout<<endl;
    }
    for(int k=0;k<d;k++)
    {
        for(int l=0;l<d;l++)
        {
     
            if(grid [k][l]==gridwon [k][l])
            {
            c=c+1;
            }
        }
    }
    if(c>4)
    cout<<"win";
    else
    cout<<"lost";

}
