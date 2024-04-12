#include <iostream>
#include <set>
using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"



void solve()
{
    int n,m ;

    cin >> n >> m;

    multiset<long long> h;

    for(int i = 0 ; i < n ; ++i)
    {
        long long val ;
        cin >> val;
        h.insert(val);
    }

    for(int i = 0 ; i < m ; ++i)
    {
        long long x;
        cin >> x;
        auto low = h.upper_bound(x);

        /* 

        we will use upperbound as we need the greatest element that is smaller than or equal to x 
        and if the element is present in the multiset then the iterator will return the pointer 
        pointing to a location that is not at the beginning
        and if the element is not present in the multiset then the iterator will point to the 
        starting of the multiset

        */
        if(low == h.begin())cout << -1 << endl;
        else
        {


        /*
        If we directly use upper_bound(), we would get the first ticket whose price is greater than the 
        customer's maximum price. But we need to give the customer the ticket with the highest possible price 
        that does not exceed their maximum price.

        So, by decrementing the iterator using --it, we move it to the ticket with the highest possible price 
        that is less than or equal to the customer's maximum price.

        This ensures that the customer gets the ticket closest in price to their maximum price without exceeding it.
        */
            low--;
            cout << *low << endl;
            h.erase(low);
        }
    }

}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ZOOM;

    solve();

    return 0;

}