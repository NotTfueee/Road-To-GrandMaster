// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n , k ; cin >> n >> k ;
    vector<long long> v(n);
    for(int i = 0 ; i < n ; ++i)cin >> v[i];

        if(k == 1)
        {
            int f = 1;

            for(int i = 1 ; i < n ; ++i)
            {
                if(v[i] < v[i-1])
                {
                    f = 0;
                    break;
                }
            }

            if(f == 1)cout << "YES"<< endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << endl;

        return ;
}

/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;

   while(t--) solve();
   return 0;

}