// Helper functions for music

#include <cs50.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
	int num = atoi(fraction[0]);
	int denom = atoi(fraction[2]);
	if( denom == 8 )
	{
		return num;
	}
	else if(denom == 4)
	{
		return 2*num;
	}
	return 4*num;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
   
 

    
    int a,b,c;
    float d,freq1,freq;
    a=2*(note[0]-65);
    

    if(3<a && a<9)
    {
        a=a-1;
    }
    else if(a>=10)
    {
        a=a-2;
        
    }
    if(note[1]=='#')
    b=1;
    else if(note[1]=='$')
    b=-1;
    else
    b=0;
    d=a+b;
    if(a<3)
    {   
        if(note[1]=='#' || note[1]=='$')
        c=note[2]-52;
        else
        c=note[1]-52;
        
    }
    else
    {
      if(note[1]=='#' || note[1]=='$')
        c=(note[2]-53);
        else
        c=(note[1]-53);
        
    }
    cout<<c<<endl;
    freq1=(pow(2,(d/12))*440);
    freq=round(pow(2,c)*freq1);
    cout<<freq;
        

   
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(s=="")
	return true;
	else
	return false;
}
