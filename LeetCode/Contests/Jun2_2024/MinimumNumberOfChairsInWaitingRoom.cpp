//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

int minimumChairs(string s) {
        
        int c = 0 , mx = 0;
        
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] == 'E')
            {
                c++;
                mx = max(mx , c);
                
            }
            else c--;
        }
        
        return mx;
}

void solve()
{
    
}
/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


  solve();
}
