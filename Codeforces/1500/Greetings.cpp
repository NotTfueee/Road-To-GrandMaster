// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

long long merge(vector<int>& mg , int low , int mid , int high)
{
   int left = low , right = mid + 1 ;
   long long c = 0;

   vector<int> temp;

   while(left <= mid && right <= high)
   {
      if(mg[left] <= mg[right])
      {
         temp.push_back(mg[left]);
         left++;
      }
      else
      {
         temp.push_back(mg[right]);
         c += (mid - left + 1);
         right++;
      }
   }

   while(left <= mid)
   {
      temp.push_back(mg[left]);
      left++;
   }

   while(right <= high)
   {
      temp.push_back(mg[right]);
      right++;
   }

   for(int i = low ; i <= high ; ++i)
   {
      mg[i] = temp[i - low];
   }

   return c;
}

long long mergeSort(vector<int>& mg , int low , int high)
{
   long long c = 0;

   if(low >= high)return c;

   int mid = (low + high) >> 1;

   c += mergeSort(mg ,low , mid);
   c += mergeSort(mg , mid + 1 , high);

   c += merge(mg , low , mid , high);

   return c;

}

void solve()
{
   int n ; cin >> n ;

   vector<pair<int , int>>v(n);

   for(int i = 0 ; i < n ; ++i)
   {
       cin >> v[i].first >> v[i].second;
   }
   sort(v.begin() , v.end());

   vector<int> mg(n);

   for(int i = 0 ; i < n ; ++i)
   {
      mg[i] = v[i].second;
   }

   cout << mergeSort(mg , 0 , n - 1) << endl;

}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif


   int t ; cin >> t;

   while(t--) solve();

   return 0;
}