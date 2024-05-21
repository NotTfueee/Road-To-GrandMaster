//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
     int n ; cin >> n ;
     string s; cin >> s;

     set<char> set (s.begin() , s.end());

     string change ;

     change.insert(change.end() , set.begin() , set.end());

     int l = 0 , r = change.size()-1;

      map<char , char> map;

        while(l <= r)
        {
            map[change[l]] = change[r];
            map[change[r]] = change[l];

            l++;
            r--;
        }

        for(int i = 0 ; i < n ; ++i)
        {
            if(map.find(s[i]) != map.end())
            {
                s[i] = map[s[i]];
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
