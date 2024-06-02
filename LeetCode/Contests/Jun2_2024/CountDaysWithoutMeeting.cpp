//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

int countDays(int days, vector<vector<int>>& intervals) 
{
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        
        for (auto interval : intervals) {
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        
        int c = 0;
        
        for(int i = 0 ; i < merged.size() ; ++i)
        {
            c += (merged[i][1] - merged[i][0] + 1);
        }
        
        return days - c;
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
