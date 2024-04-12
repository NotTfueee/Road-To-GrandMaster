// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , m , x ; cin >> n >> m >> x;

    set<int> q;
    q.insert(x);

    for(int i = 0 ; i < m ; ++i)
    {
        int r ; char c; 
        cin >> r >> c;

        set<int> temp;

        for(auto top : q)
        {
            if(c == '0' || c == '?')
            {
                int mod = (r + top) % n ;

                if(!mod) mod = n;

                temp.insert(mod);
            }

            if(c == '1' || c == '?')
            {
                int mod = (n - r + top) % n;

                if(!mod) mod = n;

                temp.insert(mod);
            }
        }

        q = temp;
    }

    cout << q.size() << endl;

    for(auto i : q) cout << i << " " ;

    cout << endl;

}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;

   while(t--)solve();

   return 0;
}