// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
int minJumps(int n, vector<int> &arr) {
        
        map<int , pair<int ,int>>map;
        
        for(int i = 0 ; i < n; ++i)
        {
            if(map.find(arr[i]) != map.end())
            {
                map[arr[i]].second = i;
            }
            else
            {
                map[arr[i]].first = i;
                map[arr[i]].second = i;
            }
        }
        
        
        int mn = INT_MAX;
        
        for(auto i : map)
        {
            int c = 0;
            
            int f = i.second.first;
            int s = i.second.second;
            
            if(f == s)
            {
                c = n-1;
            }
            else 
            {
                c += (f  + (n - s));
            }
            
            
            mn = min(mn , c);
        }
        
        return mn;
}

void solve()
{
    int n ; cin >> n ; 
    vector<int>v(n);

    for(auto&i : v) cin >> i;

    cout << minJumps(n , v) << endl;
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