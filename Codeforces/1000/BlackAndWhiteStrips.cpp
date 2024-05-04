//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;

    string s ; cin >> s;

    int mn = INT_MAX , start = 0 , c = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if(s[i] == 'B')c++;

        if(i - start == k - 1)
        {
            mn = min(mn , k - c);
            if(s[start] == 'B')c--;
            start ++;
        }
    }

    cout << mn << endl;
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
