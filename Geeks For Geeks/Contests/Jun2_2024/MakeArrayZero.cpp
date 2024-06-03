//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

int minimumOperations(int n, vector<int> &arr, int p, int q) 
    {
        
        priority_queue<int> pq(arr.begin() , arr.end());
        
        int time = 0 , ans = 0;
        
        while(!pq.empty())
        {
            int val = pq.top() - time;
            pq.pop();
            
            if(val <= 0)break;
            
            val -= p;
            time += q;
            ans ++;
            
            if(val > 0)pq.push(val + time);
        }
        
        return ans;
    }
    
void solve()
{
    
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
