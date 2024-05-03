//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; string s ; cin >> n >> s;

    for(int i = 0 ; i < n ;++i)
    {
        int currV = s[i] - 'a' , prevV = s[i-1]-'a';

        if(currV < prevV)
        {
            cout << "YES" << endl;
            cout << i-1+1 << " " << i + 1 << endl;
            return;
        }
    }


    cout << "NO" << endl;
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
