//File Created by -- > ANRAG
//Created On -- > 22/06/24,Sat,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> v(n);
        
        int c = 0;
        
        for(int i = 0 ; i < n-2 ; ++i)
        {
            if((nums[i] + v[i]) % 2 == 0)
            {
                c++;
                int k = i;
                
                for(int j = 1 ; j <= 3 && k < n ; ++j , ++k)v[k]++;
            }
        }
        
        for(int i = 0 ; i < n ; ++i)
        {
            if((v[i] + nums[i])% 2 == 0)return -1;
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
