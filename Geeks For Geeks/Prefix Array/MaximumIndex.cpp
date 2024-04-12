// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/


void print(vector<int> a)
{

    for(auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    return;
}

int maxIndexDiff(int a[] , int n)
{
    vector<int> p(n);
    vector<int> s(n);


    int mn = int(1e9) , mx = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        mn = min(mn , a[i]);
        p[i]= mn;
    }

    for(int i = n - 1; i >= 0 ; --i)
    {
        mx = max(mx , a[i]);
        s[i]= mx;
    }


    int l = 0 , r = 0 , ans = 0;

    while(l < n && r < n)
    {
        if(s[r] >= p[l])
        {
            ans = max(ans , r-l);
            r++;
        }
        else if(p[l] > s[r])l++;
    }


    return ans;
}


/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int n ;
   cin >> n ;

   int arr[n];

   for(int i = 0 ; i < n ; ++i)
   {
    int val ;
    cin >> val;

    arr[i] = val;
   }

   cout << maxIndexDiff(arr , n) << endl;

   return 0;

}