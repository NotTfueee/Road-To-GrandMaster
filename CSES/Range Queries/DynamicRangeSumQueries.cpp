
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<long long> tree;

long long f(long long node , int node_low , int node_high , int query_low , int query_high)
{
    if(query_low <= node_low && node_high <= query_high)return tree[node];

    if(node_high < query_low || query_high < node_low)return 0;

    int last_in_left = (node_high + node_low ) >> 1;
    int first_in_right  = last_in_left + 1;

    return f((node << 1) ,node_low , last_in_left , query_low , query_high) +
           f( (node << 1) + 1,first_in_right , node_high , query_low , query_high);
}

void update(int i , int v , int n)
{
    tree[n+i] = v;

    for(int j = (n + i) / 2 ; j >= 1 ; j /= 2)
    {
        tree[j] = tree[(j << 1)] + tree[(j << 1) + 1];
    }
}


void solve()
{
    int n , q ; cin >> n >> q;
    vector<int>v(n);
    for(auto&i : v) cin >> i;

    while(__builtin_popcount(n) != 1)
    {
        v.push_back(0);
        n++;
    }

    tree.resize(n << 1);

    for(int i = 0 ; i < n ; ++i)
    {
        tree[n + i] = v[i];
    }

    for(int i = n - 1 ; i >= 1 ; --i)
    {
        tree[i] = tree[(i << 1)] + tree[(i << 1) + 1];
    }

    while(q--)
    {
        int type ; cin >> type;

        if(type == 1)
        {
            int i , val ; cin >> i >> val;
            i--;
            update(i , val , n);
        }
        else
        {
            int l , r ; cin >> l >> r;
            l--;
            r--;
            cout << f(1 , 0 , n - 1 , l , r) << endl;
        }
    }

    return;

}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
}
