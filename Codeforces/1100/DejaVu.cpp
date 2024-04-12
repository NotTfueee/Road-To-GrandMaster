// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , q ; cin >> n >> q;

    vector<int> v(n) , qu(q);
    for(auto &i : v)cin >> i;
    for(auto &i : qu) cin >> i;

     unordered_set<int> set;

    for(int i = 0 ; i < q ; ++i)
    {
        if(set.find(qu[i]) != set.end())continue;

        for(int j = 0 ; j < n ; ++j)
        {
            if(v[j] % (1 << qu[i]) == 0)v[j] += (1 << (qu[i]- 1));
        }
        set.insert(qu[i]);
    }


    for(auto i : v)cout << i << " ";

    cout << endl;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;

   while(t--)solve();

   return 0;
}