//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    string a , b ; cin >> a >> b;

    int n = a.size() , m = b.size();

    if(a == b)
    {
        cout << 0 << endl;
        return;
    }

    set<string>s1 , s2 ; 

    for(int i = 0 ; i < n ; ++i)
    {
        string curr ;
        curr.push_back(a[i]);
        s1.insert(curr);

        for(int j = i + 1 ; j < n ; ++j)
        {
            curr.push_back(a[j]);
            s1.insert(curr);
        }
    }

    for(int i = 0 ; i < m ; ++i)
    {
        string curr; 
        curr.push_back(b[i]);
        s2.insert(curr);
        for(int j = i + 1 ; j < m ; ++j)
        {
            curr.push_back(b[j]);
            s2.insert(curr);
        }
    }

    int mx = 0;
    for(auto i : s1)
    {
        if(s2.find(i) != s2.end())
        {
            mx = max(mx , int(i.size()));
        }
    }

    int ans = (n - mx) + (m - mx);

    cout << ans << endl;
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
