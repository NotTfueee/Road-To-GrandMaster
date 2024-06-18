//File Created by -- > ANRAG
//Created On -- > 18/06/24,Tue,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<pair<int , int>> tree;

pair<int , int> find(int node , int node_low , int node_high , int query_low , int query_high)
{
    if(node_low >= query_low && node_high <= query_high)return tree[node];
    if(node_high < query_low || node_low > query_high)return {INT_MAX , 1};

    int lastInLeft = (node_low + node_high) >> 1;

    auto left = find( 2*node , node_low , lastInLeft , query_low , query_high);
    auto right = find( 2*node + 1 , lastInLeft + 1 , node_high , query_low , query_high);


    if(left.first < right.first)return left;
    else if(right.first < left.first)return right;
    else return {left.first , left.second + right.second};
}

void update(int i , int v , int n)
{
    tree[n + i].first = v;

    for(int j = (n + i) / 2 ; j >= 1 ; j /= 2)
    {
        if(tree[2*j].first < tree[2*j + 1].first)tree[j] = tree[2*j];
        else if(tree[2*j + 1].first < tree[2*j].first)tree[j] = tree[2*j + 1];
        else tree[j].first = tree[2*j].first , tree[j].second = tree[2*j].second + tree[2*j + 1].second;
    }
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &i: v) cin >> i;

    while (__builtin_popcount(n) != 1)
    {
        v.push_back(INT_MAX);
        n++;
    }

    tree.resize((n << 1));

    for(int i = 0 ; i < int(v.size()) ; ++i)
    {
        tree[n + i] = {v[i] , 1};
    }

    for(int j = n - 1 ; j >= 1 ; --j)
    {
        if(tree[2*j].first < tree[2*j + 1].first)tree[j] = tree[2*j];
        else if(tree[2*j + 1].first < tree[2*j].first)tree[j] = tree[2*j + 1];
        else tree[j].first = tree[2*j].first , tree[j].second = tree[2*j].second + tree[2*j + 1].second;
    }

    while(q--)
    {
        int type ; cin >> type;

        if(type == 1)
        {
            int i , val ; cin >> i >> val;
            update(i , val , n );
        }
        else
        {
            int l , r ; cin >> l >> r;
            r--;
            auto ans = find(1 , 0 , n - 1 , l , r);
            cout << ans.first << " " << ans.second << endl;
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
