//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    string s; cin >> s;

    set<char> s1 , s2;

    vector<int> pfs1(n) , pfs2(n);

    for(int i = 0 ; i < n ; ++i)
    {
        s1.insert(s[i]);
        pfs1[i] = s1.size();
    }

    for(int i = n - 1; i >= 0 ; --i)
    {
        s2.insert(s[i]);
        pfs2[i] = s2.size();
    }

    int mx = 0;

    for(int i = 0 ; i < n-1 ; ++i)
    {
        mx = max(mx , pfs1[i] + pfs2[i+1]);
    }
    
    cout << mx << endl;
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
