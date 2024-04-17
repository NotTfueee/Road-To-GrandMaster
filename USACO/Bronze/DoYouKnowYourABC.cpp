// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    vector<int> v(7);
    for(int i = 0; i < 7; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // Sort the array

    int mx = v[6]; // Maximum value is now the last element after sorting

    for(int i = 0; i < 5; ++i) {
        for(int j = i + 1; j < 6; ++j) {
            for(int k = j + 1; k < 7; ++k) {
                long long sum = v[i] + v[j] + v[k];
                if(sum == mx) {
                    cout << v[i] << " "<< v[j] << " " << v[k] << endl;
                    return;
                }
            }
        }
    }
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
// #ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif

   solve();
}