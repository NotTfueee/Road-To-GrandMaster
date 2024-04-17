// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; string s ; cin >> n >> s;

    vector<int>idx;

    for(int i = 0 ; i < n - 1 ; i += 2)
    {
        if(s[i] != s[i+1])idx.push_back(i);
    }

    if(idx.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    char prev = s[idx[0]];

    for(int i = 1 ; i < int(idx.size()) ; ++i)
    {
        char curr = s[idx[i]];

        if(curr == prev)idx[i]++;

        prev = s[idx[i]];
    }

    for(int i = 0 ; i < int(idx.size()) ; ++i)
    {
        char curr = s[idx[i]];

        int val = (curr - '0') ^ 1;

        s[idx[i]] = char(val + '0');
    }

    for(int i = 0 ; i < n -1 ; i += 2)
    {
        if(s[i] != s[i+1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << idx.size() << endl;
    for(auto i : idx) cout << i + 1 << " ";
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
