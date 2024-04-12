#include <iostream>
#include <vector>
#include <queue>

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

    queue<int> q ;

    // this is an enhanced for loop to iterate through the vector
    for(auto it : v)
    {
        // to push elements onto the starting of the queue 
        q.push(it);
    }

    // to get the size of the queue 
    cout << q.size() << endl;

    // to get the first element from the queue
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    // we can also get the back element of the queue
    cout << q.back() << endl;

    // check if the queue is empty
    cout << q.empty() << endl;

    // check the size of the queue
    cout << q.size() << endl;

    return 0;

}