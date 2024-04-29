//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
const int N = 1e7+1;
vector<int> seive(N);

void start()
{
    for(int i = 1 ; i <= N ; ++i) seive[i] = i;

    for(int i = 2 ; i * i <= N ; ++i)
    {
        if(seive[i] != i)continue;

        for(int j = i * i ; j <= N ; j += i)
        {
            if(seive[j] == j)seive[j] = i;
        }
    }
}

void getPFactors(int n , set<int>& set)
{
    seive[0] = 0; 
    seive[1] = 1;

    while(n != 1)
    {
        set.insert(seive[n]);
        n /= seive[n];
    }

}

set<int> perm(int n)
{
    string s = to_string(n);
    sort(s.begin(), s.end());
    set<int> ans;
    do
    {
        if(s[0] == '0')continue;
        int x = stoi(s);
        ans.insert(x);
    } while (next_permutation(s.begin(), s.end()));
    return ans;
}

void print(set<int>&set)
{
    for(auto i : set) cout << i << " ";
    cout << endl;
}
void solve()
{
    int x , y ; cin >> x >> y;

    auto p1 = perm(x);
    auto p2 = perm(y);

    set<int> s1 , s2;

    for(auto i : p1)getPFactors(i , s1);
    for(auto i : p2)getPFactors(i , s2);

    int mx = 0;
    for(auto i : s1)
    {
        if(s2.find(i) != s2.end())
        {
            mx = max(mx , i);
        }
    }

    cout << (mx == 0 ? 1 : mx) << endl;
}
/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    start();

    int t ; cin >> t;
    while(t--)solve();
}
