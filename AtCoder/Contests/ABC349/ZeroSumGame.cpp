// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
  int n ; cin >> n ;

  int lost = 0 , win = 0;
  for(int i = 0 ; i < n-1 ; ++i)
  {
      int x; cin >> x; 

      if(x < 0)lost += x;
      else win += x;
  }

  lost += win;

  if(lost < 0)cout << abs(lost) << endl;
  else cout << -lost << endl;

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