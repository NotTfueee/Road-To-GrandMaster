#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    long long x ;

    cin >> n >> x;
    vector<long long> v;

    for(int i = 0 ; i < n ; ++i)
    {
        int a ; 
        cin >> a ;
        v.push_back(a);
    }

    sort(v.begin() , v.end());

    int l = 0 , r = n - 1 , c = 0;

    while(l <= r)
    {

        if(l == r)
        {
            c++;
            break;
        }

        long long sum = v[l] + v[r];

        if(sum <= x)
        {
            l++;
            r--;
            c++;
        }
        else if(sum > x)
        {
            r--;
            c++;
        }
    }

    cout << c << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    //for getting the input from the input txt
    freopen("input.txt","r",stdin);
    //for printing the output to output txt
    freopen("output.txt","w",stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}