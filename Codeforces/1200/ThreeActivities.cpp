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
    int n ; cin >> n ;

    vector<pair<long long , int >> s(n) , m(n) , b(n);

    for(int i = 0 ; i < n ; ++i)
    {
        long long val ; cin >> val ;
        s.push_back({val , i});
    }

    for(int i = 0 ; i < n ; ++i)
    {
        long long val ; cin >> val ;
        m.push_back({val , i});
    }

    for(int i = 0 ; i < n ; ++i)
    {
        long long val ; cin >> val ;
        b.push_back({val , i});
    }

    sort(s.rbegin() , s.rend());
    sort(m.rbegin() , m.rend());
    sort(b.rbegin() , b.rend());

    long long res = 0;

    for(int i = 0 ; i < 3 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            for(int k = 0 ; k < 3 ; ++k)
            {
                if(s[i].second != m[j].second && s[i].second != b[k].second && m[j].second != b[k].second)
                {
                    long long sum = s[i].first + m[j].first + b[k].first;
                    res = max(res , sum);
                }
            }
        }
    }

    cout << res << endl;

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