//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;

vector<int> a(n) , b(m);

for(auto& i : a) cin >> i;
for(auto&i : b) cin >> i;

sort(a.begin() , a.end());
sort(b.begin() , b.end());

if(n < 4 || m < 4) 
{
    cout << -1 << endl;
    return;
}

priority_queue<int> pq;

long long sum = 0;

for(int i = n - 1 ; i >= 0 ; --i)
{
    if(i >= n-4)sum += a[i];
    else pq.push(a[i]);
}

for(int i = m - 1 ; i >= 0 ; --i)
{
    if(i >= m - 4)sum += b[i];
    else pq.push(b[i]);
}

int count = 0;
while(count < 3 && !pq.empty())
{
    sum += pq.top();
    pq.pop();
    count ++;
}

if(count < 3)
{
    cout << -1 << endl;
}
else
{
    cout << sum << endl;
}
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
