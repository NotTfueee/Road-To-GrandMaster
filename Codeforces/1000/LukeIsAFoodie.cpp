//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    /* 
    we found the range of v by solving the given equation |v - a[i]| ≤ x that is 
    a[i] - x ≤ v ≤ a[i] + x

    the value of v should be in between this range only for luke to be able to eat the
    current pile 

    now we need to find the minimum number of changes that need to be made v so that 
    he can eat all the piles from left to right !

    now the question remains is , finding the number of non overlapping intervals 
*/

    int n , x ; cin >> n >> x;
    vector<int> v(n);
    for(auto&i : v) cin >> i;

    
    int l = v[0] - x , r = v[0] + x , c = 0;

    for(int i = 1 ; i < n ;++i)
    {

        
/*
        after finding the intervals for each element , for the left range we will take the 
        max value among both the intervals of the curr prev interval and for the right 
        interval we take the min for the right range for the curr and the prev 
        interval 

        then we check if the left value exceeds the right range means that the
        interval does not overlap so we need a new value of v so we change it 
*/
        
        l = max(l , v[i] - x);
        r = min(r , v[i] + x);

        if(l > r)
        {
            c++;
            l = v[i] - x;
            r = v[i] + x;
        }
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
