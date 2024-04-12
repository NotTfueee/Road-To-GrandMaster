// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    string s ; cin >> s;

    int i = 0 , c = 0;

    while(i < n)
    {
        if(s[i] == 'm' && i+2 < n)
        {
            if(s.substr(i , 3) == "map")
            {
                c++;
                i += 2;
            }
        }
        else if(s[i] == 'p' && i+2 < n)
        {

            if(s.substr(i,3) == "pie")
            {
                c++;
                i += 2;
            }
        }

        i++;
    }

    cout << c << endl;
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