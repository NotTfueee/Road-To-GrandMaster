//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

vector<int> getFactors(int n)
    {
        vector<int> ans;
        for(int i = 1 ; i * i <= n ; ++i)
        {
            if(n % i == 0)
            {
                ans.push_back(i);

                if((n / i) != i)ans.push_back((n/i));
            }
        }

        return ans;
    }

    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        ios_base::sync_with_stdio(0); 
        cin.tie(0);
        cout.tie(0);

        map<long long , long long> cone , ctwo ;

        long long ans = 0;

        for(int i = 0 ; i < nums2.size() ; ++i)nums2[i] *= k;

        for(auto i : nums1)cone[i]++;
        for(auto i : nums2)ctwo[i]++;


        for(auto &[key , value] : cone)
        {
            auto f = getFactors(key);

            for(auto j : f)
            {
                ans += (value * ctwo[j]);
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
