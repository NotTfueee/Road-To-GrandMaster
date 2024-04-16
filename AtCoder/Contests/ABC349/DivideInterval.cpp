// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
int power(long long l)
{
    int set = 0;
    for(int i = 0 ; i <= 60 ; ++i)
    {
        if((l >> i)&1)
        {
            set = i;
            break;
        }
    }

    return set;
}

void solve()
{
    long long l , r ; cin >> l >> r;

    vector<pair<long long , long long>>v;

    while(l != r)
    {
        int set = power(l);

        if(l == 0 )set = 60;

        for(int i = set ; i >=0 ; --i)
        {
            long long temp = (1L << i);
            if((l % temp)==0)
            {
                long long rem = (l / temp) , num = temp * (rem + 1);

                if(num <= r)
                {
                    v.push_back({l , num});
                    l = num;

                    break;
                }
            }
        }
    }

    cout << v.size() << endl;
    for(auto i : v) cout << i.first << " " << i.second << endl;
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