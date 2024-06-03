//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
bool check(int n)
  {
      int temp = n;
      
      int digit = 0;
      
      while(temp)
      {
          int d = temp % 10;
          digit = digit * 10 + d;
          
          temp /= 10;
      }
      
      return (n == digit);
  }
  
    int countSuperPalindrome(int l, int r) 
    {
        
        int ans = 0;
        
        for(int i = 1 ; i <= 31622 ; ++i)
        {
            int sq = (i * i);
            
            if(sq >= l && sq <= r)
            {
                if(check(sq))ans++;
            }
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
