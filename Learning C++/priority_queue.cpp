#include <iostream>
#include <vector>
#include <queue>
#include <functional>

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

    vector<int> v = { 1, 2, 11 ,3 , 1, 2, 3, 4, 4, 5, 6, 7, 7, 10};

    // by default pq is a max heap 
    priority_queue<int> pq;

    // this is an enhanced for loop to iterate through the vector
    for(auto it : v)
    {
        // to push elements onto the starting of the queue 
        pq.push(it);
    }

    //all other functionalities are same as queue 

    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }


    cout << "------" << endl;

    // to declare a priority queue having smaller elements at the top
    priority_queue<int , vector<int> , greater<int>> sq;

    for(auto it : v)
    {
        sq.push(it);
    }

    while(!sq.empty())
    {
        cout << sq.top() << endl;
        sq.pop();
    }

    return 0;

}