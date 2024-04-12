#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


bool cmp(pair<long long , long long > &a , pair<long long , long long > &b)
{
    return (a.second < b.second);
}



void solve()
{
    int n ; 
    cin >> n ;

    vector<pair<long long , long long>>v;

    for(int i = 0 ; i < n ; ++i)
    {
        long long start , end;
        cin >> start >> end;

        v.push_back({start , end});
    }

    sort(v.begin() , v.end() , cmp);

    long long prev = -1 , ans = 0;
    for(auto i : v)
    {
         if(i.first >= prev)
         {
            prev = i.second;
            ans++;
         }
    }
    cout << ans << endl;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ZOOM;

    solve();

    return 0;

}