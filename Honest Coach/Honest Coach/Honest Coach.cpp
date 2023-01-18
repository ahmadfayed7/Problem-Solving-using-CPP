// Honest Coach.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    int t, n,e;
    vector<int> v;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int k = 0; k < n; k++)
        {
            cin >> e;

            v.push_back(e);
            if (k == (n - 1))
            {
                sort(v.begin(), v.end());
                int min = abs(v[1] - v[0]);
                for (int j = 2; j < n; j++)
                {
                    if (min> abs(v[j] - v[j - 1]))
                    {
                        min = abs(v[j] - v[j - 1]);
                    }
                }
                cout << min << endl;
                v.clear();
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
