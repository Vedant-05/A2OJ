#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    cin>>s;
    
    int lowerIn = 0;
    int upperIn = 0;
    string sLow = "";
    string sUpp = "";
    
    for(int i=0;i<s.length();i++)
    {
        
        sLow+= tolower(s[i]) ;
        sUpp+= toupper(s[i]) ;
        
        if(islower(s[i]))
        {
          lowerIn++;
        }
        else
        {
            upperIn++;
        }
    }
    
    if(lowerIn>=upperIn)
    {
        cout<<sLow<<endl;
    }
    else
    {
        cout<<sUpp<<endl;
    }
}
