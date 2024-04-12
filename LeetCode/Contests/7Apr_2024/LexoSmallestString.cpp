// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

    string s ; cin >> s ;
    int k ; cin >> k;


    for(int i = 0 ; i < int(s.length()) ; ++i)
    {
        if(k <= 0)break;

        if(s[i] == 'a')continue;

        int idx = s[i] - 'a' , l = idx , r = 26 - idx;

        int mn = min(l , r);

        if(k >= mn)
        {
            s[i] = 'a';
            k-= mn;
        }
        else 
        {
            idx -= k;

            s[i] = 'a' + idx;

            k = 0;
        }
    }

    cout << s << endl;
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