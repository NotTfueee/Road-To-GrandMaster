//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

 /*
    Find the position of Most Significant Bit (MSB) in both the numbers (L and R)
    If the position of both MSBs are different, set all the bits from the max(MSB1, MSB2), including this different bit, up to Oth bit i.e., add the value (1 << i) for all 0 ≤ i ≤ max(MSB1, MSB2) in the answer.
    If the position of both MSBs is the same, then 
    Set this bit corresponding to MSB or add the value (1 << MSB) in the answer.
    Subtract the value (1 << MSB) from both the numbers (L and R).
    Repeat steps 1, 2, and 3.
*/    


int findMsb(long long n )
{
    for(int i = 63 ; i >= 0 ; --i)
    {
        if((n >> i) & 1)return i;
    }

    return -1;
}
void solve()
{
    long long l , r , ans = 0 ; cin >> l >> r;

    int msbl = findMsb(l) , msbr = findMsb(r);

    while(msbl == msbr)
    {
        long long num = (1LL << msbl);

        ans |= num;

        l -= num;
        r -= num;

        msbl = findMsb(l);
        msbr = findMsb(r);
    }

    msbl = max(msbl , msbr) + 1;

    long long num = (1LL << msbl)-1;

    cout << (ans | num) << endl;
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
