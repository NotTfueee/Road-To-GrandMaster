//File Created by -- > ANRAG
//Created On -- > 22/06/24,Sat,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
int minOperations(vector<int>& nums) {

        
        int c = 1 , ans = 0 , n = nums.size() , o = 0 , z = 0;
        
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] == 0)z++;
            else o++;
        }
        
        if(!z)return 0;
        
        
        for(int i = 0 ; i < n ; ++i)
        {
            if((nums[i] + c) % 2 != 0)
            {
                ans++;
                z--;
                
                o ^= z;
                z ^= o;
                o ^= z;
                
                c++;
                
            }
        }
        
        return ans;
        
    }
    
void solve()
{

}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 solve();
}
