//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
int countOperations(string s) 
    {
        
        int n = s.size() , MOD = int(1e9+7) , count = 0 , ans = 0;
        
        for(int i = n - 1 ; i >= 0 ; --i)
        {
            if(s[i] == 'a')
            {
                ans = ((ans % MOD) + (count % MOD)) % MOD;
                
                count = ((count % MOD) * (2 % MOD)) % MOD;
            }
            else count++;
        }
        
        return ans;
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
