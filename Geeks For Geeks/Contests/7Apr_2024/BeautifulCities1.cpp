// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
vector<int> canTrade(int n, vector<int>& b, int qs,vector<vector<int>>& q) 
    {
        vector<int> ans;
        vector<int> pfs(n);
        
        pfs[0] = 1;
        for(int i = 1 ; i < n ; ++i)
        {
            if(b[i] != b[i-1])pfs[i] = pfs[i-1] + 1;
            else pfs[i] = pfs[i-1];
        }
        
        for(int i = 0 ; i < qs ; ++i)
        {
            int l = q[i][0] , r = q[i][1];
            
            l--;
            r--;
            
            if(pfs[l] == pfs[r])ans.push_back(1);
            else ans.push_back(0);
        }
        
        return ans;
    }
void solve()
{
    int n ; cin >> n;
    vector<int>b(n);
    for(auto&i : b) cin >> i;

    int qs ; cin >> qs;
    vector<vector<int>>q(qs, vector<int>(2));
    for(int i = 0 ; i < qs ; ++i)
    {
        int f , s ; cin >> f >> s;
        q[i][0] = f;
        q[i][1] = s;
    }


    auto v = canTrade(n , b , qs , q);

    for(auto i : v) cout << i << " ";
    cout << endl;   
    return;
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