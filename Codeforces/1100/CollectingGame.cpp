// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;

    vector<pair<int , int>> v(n);

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin() , v.end());

    vector<long long> pfs(n) , ans(n , -1);

    long long sum = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        sum += v[i].first;
        pfs[i] = sum;
    }

    stack<int> d;

    for(int i = 0 ; i < n ;++i)
    {
        d.push(v[i].second);

        if(i == n - 1 || v[i+1].first > pfs[i])
        {
            while(!d.empty())
            {
                ans[d.top()] = i;
                d.pop();
            }
        }
    }

    for(auto i : ans)cout << i << " ";

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