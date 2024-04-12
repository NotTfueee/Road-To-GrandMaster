// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
bool helper(vector<int>&v , int r , long long mid , int k)
{
    int n = v.size();

    vector<int> addedKValueAtIndex(n , 0);
    long long sum = 0;
    /* 
        we will calculate the sum of the 0 to r-1 elements & for the last r'th element 
        we will first check if that element is in the range of the array or not if it is
        then we will add it to our sum 
    */
    for(int i = 0 ; i < r ; ++i)sum += v[i];

    for(int i = 0 ; i < n ; ++i)
    {

        // checking if the last element is in the range or not
        if(i + r < n )sum += v[i+r];

        /* we then check if the sum of the current window is less than the mid value which is
            our potential ans if the sum is less than the mid 
            this means we need to increase the current i's window [i-r , i+r] sum so that our
            minimized importance is maximized so we check if the available k is greater than
            the required number that is required to make the current window's sum equal to 
            mid
            if no we return false meaning that this value of mid does not maximize our 
            minimum importance

            so we move our right pointer to mid - 1 
        */
        if(sum < mid)
        {
            int req = mid - sum;

            if(req > k)return false;

            sum += req;
            k -= req;

            addedKValueAtIndex[min(i+r , n-1)] += req; 
        }

        /*
            we are simply sliding the window by removing the extra elements from the left 
            of the window which are less tha [i-r]
        */

        if(i - r >= 0)
        {
            sum -= (v[i-r] + addedKValueAtIndex[i-r]);
        }

    }


    return true;
}
void solve()
{
    int n , r , k ; cin >> n >> r >> k;

    vector<int> v(n);

    for(auto&i : v) cin >> i;

    long long high = 0 , low = 0 , ans = 0;

    for(int i = 0 ; i < n;  ++i)high += v[i]; 
    high += k;

    while(low <= high)
    {
        int mid = ((low + high) >> 1);

        if(helper(v , r , mid , k ))
        {
            ans = mid;
            low = mid + 1;

        }
        else high = mid - 1;
    }

    cout << ans << endl;
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