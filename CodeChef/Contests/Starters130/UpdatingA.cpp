// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n ;
    vector<long long> v(n);

    for(auto&i : v) cin >> i;

    /* 
    we need to find the window that has the minimum sum and turn that window into a +ve 
    sum 

    we will maintain 2 var currNeg and minNeg currNeg will first store the first element of
    the array into the currNeg and when iterating through the loop will check if adding the
    current element will lead to a smaller currNeg or the current element alone is smaller
    than the currNeg which ever option is the minimum we will choose that 

    and for the minNeg we will store the minimum sum we have found till now so we 
    check which is the minimum the minNeg or the currNeg after adding the current element
    whichever is the smallest will be stored in the minNeg

    and the finally we are doing 2*minNeg + total why 2 * ? because we will first remove the
    smallest sum subarray that we have founded and then add its +ve corresponding sum 
    
    */
    long long currNeg = v[0] ,  minNeg = 0 , total = v[0];

    for(int i = 1 ; i < n ; ++i)
    {
        minNeg = min(minNeg , currNeg + v[i]);
        currNeg = min(currNeg + v[i] , v[i]);
        total += v[i];
    }

    cout << (total + abs((minNeg << 1))) << endl;
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
   while(t--) solve();

}
