// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
bool checkArray(vector<int>& v) {
    int n = v.size();
    
    for (int i = 1; i < n - 1; ++i) {
        if (v[i - 1] <= v[i + 1] && v[i] >= 2 * v[i - 1]) {
            v[i + 1] -= v[i - 1];
            v[i] -= 2 * v[i - 1];
            v[i - 1] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (v[i] != 0)
            return false;
    }
    
    return true;
}

void solve()
{
   int n ; cin >> n ;

   vector<int> v(n);
   for(int i = 0 ; i < n ; ++i)cin >> v[i];

       if (checkArray(v))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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