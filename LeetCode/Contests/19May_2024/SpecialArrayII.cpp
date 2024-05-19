//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
{

        int n = nums.size() ;
        vector<int> pfs(n , 0);

        for(int i = 1 ; i < n ; ++i)
        {
            if((nums[i]&1) && (nums[i-1]&1))pfs[i] = pfs[i-1]+1;
            else if(!(nums[i]&1) && !(nums[i-1]&1))pfs[i] = pfs[i-1]+1;
            else pfs[i] = pfs[i-1];
        }

        vector<bool> ans;

        for(int i = 0 ; i < queries.size() ; ++i)
        {
            int l = queries[i][0] , r = queries[i][1];

            if(pfs[r] - pfs[l])ans.push_back(false);
            else ans.push_back(true);
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


    int t ; cin >> t;
    while(t--)solve();
}
