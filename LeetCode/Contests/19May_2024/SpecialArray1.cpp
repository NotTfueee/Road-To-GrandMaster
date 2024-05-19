//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    
        int n = nums.size();
        vector<int> v(n);
        
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] & 1)v[i] = 1;
            else v[i] = 0;
        }
        
        
        for(int i = 1 ; i < n ;++i)
        {
            if(v[i] == v[i-1])return false;
        }
        
        return true;
        
}
/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int t ; cin >> t;
    while(t--)solve();
}
