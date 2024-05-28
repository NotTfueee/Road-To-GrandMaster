//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
     long long sum = 0;
        
        for(int i : v) sum += i;
        
        long long l = 0 , r = 1e10 , ans = 1e10;
        
        while(l <= r)
        {
            long long mid = ((l + r) >> 1) , csum = 0;
            int f = 0;
            for(int i = 0 ; i < n ; ++i)
            {
                if(mid - v[i] < 0)
                {
                    f = 1;
                    break;
                }
                csum += (mid - v[i]);
            }
            
            if(f || csum <= sum)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        
        return l;
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
