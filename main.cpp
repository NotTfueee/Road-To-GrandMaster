// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    string s ; cin >> s;

    vector<int> v;

    for(int i = 0 ; i < n-1; i += 2)
    {
        if(s[i] != s[i+1])
        {
            v.push_back(i);
        }
    }

    for(int i = 1 ; i < v.size() ; ++i)
    {
        if(s[v[i]] == s[v[i-1]])
        {
            cout << -1 << endl;
            return;
        }
    }

    int so = 0;
    if(v.size() > 0)
    {

        if(s[v[0]] == '1')
        {
            so = 1;
            v[0]++;
        }
    }
    else 
    {
        cout << 0 << endl;
        return;
    }

    for(int i = 1 ; i < v.size() ; ++i)
    {
        if(so)v[i]++;
    }

    cout << v.size() << endl;
    for(auto i : v)cout << i + 1 << " ";
    cout << endl;
}
/*----------------------------------------------------------------------------------------*/

int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;

   while(t--) solve();

}
