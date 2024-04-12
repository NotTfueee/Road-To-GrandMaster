// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n;
    cin >> n;

    vector<int> pos(n);

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        pos[num - 1] = i;
    }

    int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (pos[i] < pos[i - 1])
            ans++;
    }

    cout << ans << endl;

    return ;
}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   solve();

   return 0;
}