// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int a , b ; cin >> a >> b;
    int kx , ky ; cin >> kx >> ky;
    int qx , qy ; cin >> qx >> qy;

    vector<pair< int  , int >> d = {{a,b} , {a,-b} , {-a,b} , {-a,-b} ,
                                    {b,a} ,{b,-a} , {-b , a} , {-b,-a}};

    set<pair<int , int>> set1 , set2;

    for(auto p : d)
    {
        int x = kx + p.first ;
        int y = ky + p.second;

        set1.insert({x,y});

        x = qx + p.first;
        y = qy + p.second;

        set2.insert({x,y});
    }

    int c = 0;
    for(auto i : set1)
    {
        if(set2.find(i) != set2.end())c++;
    }

    cout << c << endl;
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
