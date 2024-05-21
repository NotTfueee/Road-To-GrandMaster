//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

vector<int> matchingCnt(int n, vector<string>& nums) {
        
        
        vector< vector<int> > map ( 2e5+5 , vector<int>(27 , 0));
        
        vector<int> ans;
        
        for(int i = 0 ; i < n ; ++i)
        {
            string s = nums[i];
            int len = s.size();
            
            for(int j = 0 ; j < len ; ++j)
            {
                map[j][s[j]-'a']++;
            }
        }
        
        
        for(int i = 0 ; i < n ; ++i)
        {
            string s = nums[i];
            
            int len = s.size() , c = 0;
            
            for(int j = 0 ; j < len ; ++j)
            {
                 map[j][s[j] - 'a']--;
                c += (map[j][s[j] - 'a']);
            }
            
            ans.push_back(c);
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
