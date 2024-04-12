#include <iostream>
#include <deque>
using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ZOOM;

    // deque (deck) methods 

    deque<int> dq;

    // we can insert values at the first and at the last of the dequeu in O(1) 
    // to insert the values in the front 
    dq.push_front(10);
    dq.push_front(11);

    // to insert the values at the end 
    dq.push_back(12);
    dq.push_back(22);

    //to get the value at the front
    cout << dq.front() << endl;

    // to get the value at the end 
    cout << dq.back() << endl;


    // to get the size of vectors , deque we have to use unsigned int 
    unsigned int n = dq.size();
    cout << n << endl;

    // to iterate through the deque it is similar to using auto 

    for(auto it = dq.begin() ; it != dq.end() ; ++it)
    {
        cout << *it << endl;
    }

    //to remove elements from the front of the deque 
    dq.pop_front();

    // to remove elements from the back of the deque 
    dq.pop_back();

    //to clear the deque 
    dq.clear();

    cout << dq.size() << endl;

    return 0;
}