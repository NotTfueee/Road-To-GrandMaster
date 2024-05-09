//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    string s ; cin >> s;

    vector<int> pfs(n , 0) , sfs(n , 0) , b;

    int c = 0 , ca = 0 , cc = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(s[i] == 'a')c++;
        if(s[i] == 'b')pfs[i] = c;

        if(s[i] == 'b')b.push_back(i);
    }
    c = 0;

    for(int i = n - 1; i>= 0 ; --i)
    {
        if(s[i] =='c')c++;
        if(s[i] == 'b')sfs[i] = c;
    }
    
    if(b.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    
    int ans = min(pfs[b.back()] , sfs[b.front()]);

    for(int i = 0 ; i < b.size() - 1 ; ++i)
    {
        int val = pfs[b[i]] + sfs[b[i+1]];
        ans = min(val , ans);
    }

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
