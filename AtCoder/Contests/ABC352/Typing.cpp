//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    string s , t ; cin >> s >> t;

    int i = 0 , j = 0 , n = s.size() , m = t.size();

    while(i < n && j < m )
    {
        if(s[i] == t[j])
        {
            cout << j + 1 << " ";
            i ++;
        }
        j++;
    }

    cout << endl;


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
