//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/


int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) 
{

        int n = nums1.size() , m = nums2.size() , ans = 0;

        for(int i = 0 ; i < n ; ++i)
        {
            int curr = nums1[i];
            for(int j = 0 ; j < m ; ++j)
            {
                if(curr % (nums2[j] * k) == 0)ans++;
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
