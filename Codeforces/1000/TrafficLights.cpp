//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    char c ; cin >> c;
    string s ; cin >> s;

    string curr = s + s;

    int mx = 0;

    for(int i = 0 ; i < int(curr.size()) ; ++i)
    {
        if(curr[i] == c)
        {
            int c = 0;
            while(i < int(curr.size()) && curr[i] != 'g')
            {
                i++;
                c++;
            }

            mx = max(mx , c);
        }
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
