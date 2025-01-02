#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	n++;
	
	for(int i = n;i<1e5;i++)
	{
	    map<int,int> mp;
	    mp.clear();
	    bool isPossible = true;
	    int newTemp = i;
	    while(newTemp!=0)
	    {
	        int x = newTemp%10;
	        newTemp/=10;
	       // cout<<newTemp<<" "<<mp[newTemp]<<endl;
	        if(mp[x]!=0)
	        {
	            isPossible = false;
	            break;
	        }
	        else
	        {
	            mp[x]++;
	        }
	    }
	    if(isPossible)
	    {
	    cout<<i<<endl;
	    break;
	    }
	}

}
