//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void print(vector<int>&v)
{
    for(auto i : v) cout << i << " ";
    cout << endl;
    return;
}

void solve()
{
    int n ; cin >> n ;
    vector<int> a(n) , b(n);
    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;

    int m ; cin >> m;
    vector<int> d(m);
    for(auto&i : d)cin >> i;

    map<int , int> mp;
    for(auto i : d) mp[i]++;

    set<int> used;

    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i] != b[i])
        {
            if(mp.find(b[i]) != mp.end())
            {
                mp[b[i]]--;
                used.insert(b[i]);
                if(mp[b[i]] <= 0)mp.erase(b[i]);

            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else used.insert(a[i]);
    }

    if(mp[d[m-1]] > 0 && used.find(d[m-1]) == used.end())
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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

    int t ; cin >> t;
    while(t--)solve();
}
