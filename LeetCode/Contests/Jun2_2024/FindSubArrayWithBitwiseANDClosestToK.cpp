//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

 vector<vector<int>> sparse;

void build(int n , vector<int>&v)
    {
        int k = 0;

        for(int i = 31 ; i >= 0 ; --i)
        {
            if((n >> i) & 1)
            {
                k = i;
                break;
            }
        }

        sparse.resize(n , vector<int>(k + 1));

        for(int i = 0 ; i < n ; ++i) sparse[i][0] = v[i];

        for(int power = 1 ; power <= k ; ++power)
        {
            for(int idx = 0 ; idx + (1 << power)  <= n ; ++idx)
            {
                sparse[idx][power] = sparse[idx][power-1] & sparse[idx + (1 << (power - 1))][power-1];
            }
        }
}

int query(int l , int r)
{
        int len = r - l + 1 , k = 0;

        for(int i = 31 ; i >= 0 ; --i)
        {
            if((len >> i ) & 1)
            {
                k = i;
                break;
            }
        }

        return sparse[l][k] & sparse[r - (1 << k) + 1][k];
}

int minimumDifference(vector<int>& nums, int k) {

        int ans = INT_MAX , n = nums.size();

        build(n , nums);

        for(int i = 0 ; i < n ; ++i)
        {

            int l = i , r = n - 1 ; 

            while(l <= r)
            {
                int mid = (l + r) >> 1;
                int andd = query(i , mid);

                ans = min(ans , abs(k - andd));

                if(andd <= k)r = mid - 1;
                else l = mid + 1;
            }
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
