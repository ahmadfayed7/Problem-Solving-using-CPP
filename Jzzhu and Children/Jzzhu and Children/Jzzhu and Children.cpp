// Jzzhu and Children.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
#include<queue>
using namespace std;
int main()
{
    queue<pair<int, int>> q;
    int n ,m,e;
    cin >> n>> m;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        q.push({ i + 1,e });
        

    }

    while (q.size() != 1)
    {
        e = q.front().second - m;

        if (e > 0)
        {
            q.push({ q.front().first, q.front().second - m });
            q.pop();
        }
        else
        {
            q.pop();
        }
    }
    cout << q.front().first;
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
