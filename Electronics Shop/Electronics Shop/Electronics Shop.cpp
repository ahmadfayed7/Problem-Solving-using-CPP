// Electronics Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int getMoneySpent(vector<int> k, vector<int> u, int b)
{
    int max =-1 ;
    for (int i = 0; i < k.size(); i++)
    {
      
        for (int j = 0; j < u.size(); j++)
        {
            if ((k[i] + u[j]) <= b)
            {
                if ((k[i] + u[j]) >max)
                {
                    max = k[i] + u[j];
                }
            }

        }
    }

    return max;
}
int main()
{
    int b, n, m,e;
    cin >> b >> n >> m;
    vector<int> k;
    vector<int> u;
    for (int i = 0 ;i < n; i++)
    {
        cin >> e;
        k.push_back(e);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> e;
        u.push_back(e);
    }
    e = getMoneySpent(k, u, b);
    cout << e;
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
