//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void print(vector<vector<int>>&v)
{
    for(int i = 0 ; i < v.size() ; ++i)
    {
        cout << i << "---->";
        for(int j = 0 ; j < v[i].size() ; ++j)cout << v[i][j] << " ";
        cout << endl;
    }

    return ;
}
void solve()
{

    int n ; cin >> n;
    vector<int> v(n);

    for(auto&i : v) cin >> i;

    vector< vector<int> > map(11 , vector<int>(11));

    for(int i = 0 ; i < v.size() ; ++i)
    {
        string str = to_string(v[i]);
        int len = str.size();

        for(int j = 0 ; j < len ; ++j)
        {
            map[j][str[j]-'0']++;
        }
    }

    long long ans = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        string str = to_string(v[i]);
        int len = str.size();
        for(int j = 0 ; j < len ; ++j)
        {
            ans += (n - map[j][str[j]-'0']);
        }
    }

    cout << (ans >> 1) << endl;
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
