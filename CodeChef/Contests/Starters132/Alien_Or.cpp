//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;

    vector<string> v(n);

    set<int>set;

    for(int i = 0 ; i < n ; ++i)
    {
        string s; cin >> s;
        v[i] = s;

        int c = 0 , idx = -1;
        for(int j = 0 ; j < k ; ++j)
        {
            if(s[j] == '1')c++ , idx = j;
        }

        if(c == 1)set.insert(idx);
    }

    if(set.size() == k)cout << "YES" << endl;
    else cout << "NO" << endl;
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
