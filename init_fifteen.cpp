#include <iostream>

using namespace std;

int main() {
    int d;
    cin>>d;
    int grid [100][100]={};
    
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
                    grid [d-1][d-1]={};
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

}
