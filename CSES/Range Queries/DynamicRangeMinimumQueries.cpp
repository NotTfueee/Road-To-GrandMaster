//File Created by -- > ANRAG
//Created On -- > 18/06/24,Tue,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<int> tree;

int f(int node , int node_low , int node_high , int query_low , int query_high)
{
    if(node_low >= query_low && node_high <= query_high)return tree[node];

    if(node_high < query_low || node_low > query_high)return INT_MAX;

    int last_in_left = (node_low + node_high) >> 1;

    int l = f( 2*node , node_low , last_in_left , query_low , query_high);
    int r = f(2*node + 1 , last_in_left + 1 , node_high ,  query_low , query_high);

    return min(l , r);
}

void update(int i , int v , int n)
{
    tree[n + i] = v;

    for(int j = ( n + i ) / 2 ; j >= 1 ; j /= 2)
    {
        tree[j] = min(tree[2*j] , tree[2*j + 1]);
    }
}

void solve()
{
    int n , q; cin >> n >> q;
    vector<int> v(n);
    for(auto&i : v) cin >> i;

    while(__builtin_popcount(n) != 1)
    {
        v.push_back(0);
        n++;
    }

    tree.resize(2 * n );

    for(int i = 0 ; i < n ; ++i)
    {
        tree[n + i] = v[i];
    }

    for(int i = n-1 ; i >= 1 ; --i)
    {
        tree[i] = min(tree[2*i] , tree[2*i + 1]);
    }

    while(q--)
    {
        int type ; cin >> type ;

        if(type == 1)
        {
            int i , val ; cin >> i >> val;
            i--;

            update(i , val , n);
        }
        else
        {
            int l , r ; cin >> l >> r;
            l--; r--;
            cout << f(1 , 0 , n - 1 , l , r) << endl;
        }
    }

    return ;
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
