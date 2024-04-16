// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void print(vector<long long >&v)
{
    for(auto i : v) cout << i << " ";
    cout << endl;
    return;
}
void solve()
{
    int n , q; cin >> n >> q;
    vector<long long>v(n) , pfx(n);

    long long x = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
        x ^= v[i];
        pfx[i] = x;
    }

    for(int i = 0 ; i < q ; ++i)
    {
        int l , r ; cin >> l >> r;
        l--; r--;

        if(l == 0)
        {
            cout << pfx[r] << endl;
        }
        else 
        {
            cout << (pfx[r] ^ pfx[l-1]) << endl;
        }
    }

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