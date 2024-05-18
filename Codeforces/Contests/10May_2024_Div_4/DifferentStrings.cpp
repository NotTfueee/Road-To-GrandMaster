//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    string s ; cin >> s;

    set<char> set;

    for(auto i : s) set.insert(i);

    if(set.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }

    string rev = s ;
    string sor = s;

    sort(sor.begin() , sor.end());
    reverse(rev.begin() , rev.end());

    if(rev == s)
    {
        cout << "YES" << endl;
        cout << sor << endl;
        return;
    }
    else 
    {
        cout << "YES" << endl;
        cout << rev << endl;
        return;
    }
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
