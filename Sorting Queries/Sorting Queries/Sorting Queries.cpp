// Sorting Queries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    
    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> q;
    int q1, q2,n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> q1;
        if (q1 == 1)
        {
            cin >> q2;
            q.push(q2);
        }
        else if (q1 == 2)
        {
            if (pq.empty())
            {
                pq.push(q.front());
                q.pop();
            }
            cout << pq.top()<<endl;
            pq.pop();
        }
        else if (q1 == 3)
        {
        
            while (!q.empty())
            {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
