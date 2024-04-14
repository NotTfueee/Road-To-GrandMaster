// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve() 
{
   int n , m ; cin >> n >> m ;

   string s ; cin >> s;

   vector<string> arr(m);
   vector<int> ans;

   for(int i = 0 ; i < m ; ++i)
   {
      string in ; cin >> in;
      arr[i] = in;
   }

    map<char , vector<int>> myMap;
        
   for(int i = 0 ; i < n ; ++i)myMap[s[i]].push_back(i);
        
        
        for(int i = 0 ; i < m ; ++i)
        {
            string curr = arr[i];
            
            map<char , int>cm;
            
            for(auto c : curr) cm[c]++;
            
            int mx = INT_MIN;
            
            for(auto x : cm)
            {
                if(myMap.find(x.first) != myMap.end())
                {
                    auto idx = myMap[x.first];
                    
                    if(x.second > idx.size())
                    {
                        mx = INT_MIN;
                        break;
                    }
                    else mx = max(mx , idx[x.second-1]);
                }
                else 
                {
                    mx = INT_MIN;
                    break;
                }
            }
            
            
            if(mx == INT_MIN)ans.push_back(-1);
            else ans.push_back(mx + 1);
        }

      for(auto i : ans)cout << i << " ";

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