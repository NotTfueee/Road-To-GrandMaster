//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;
    vector<int> a(n) , b(m) , ans;

    for(auto&i : a)cin >> i;
    for(auto&i : b)cin >> i;

    int l = 0 , r = 0;

    while(l < n && r < m)
    {
        if(a[l] < b[r])
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(b[r]);
            r++;
        }
    }

    while(l < n)
    {
        ans.push_back(a[l]);
        l++;
    }

    while(r < m)
    {
        ans.push_back(b[r]);
        r++;
    }

    for(auto i : ans)cout << i << " ";
    cout << endl;
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
