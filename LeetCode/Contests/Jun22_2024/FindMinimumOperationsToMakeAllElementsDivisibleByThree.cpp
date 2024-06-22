//File Created by -- > ANRAG
//Created On -- > 22/06/24,Sat,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

 int minimumOperations(vector<int>& nums) {
        
        int n = nums.size() , c = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] % 3 != 0)
            {
                int l = nums[i] / 3;
                int r = l + 1;
                
                int c1 = abs(l*3 - nums[i]);
                int c2 = abs(r*3 - nums[i]);
                
                c += min(c1 , c2);
            }
        }
        
        return c;
        
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
