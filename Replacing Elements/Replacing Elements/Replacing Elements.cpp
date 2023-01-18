// Replacing Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int replace_element(vector<int> in, int d)
{

    vector<int> v1, v2;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] <= d)
        {
            v1.push_back(in[i]);
        }
        else
        {
            v2.push_back(in[i]);
        }
    }
    if (v2.size() == 0)
    {
        return 1;
    }
    else
    {
         sort(v1.begin(), v1.end());
        if (v1.size() >= 2)
        {
            if (v1[0] + v1[1] <= d) {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int testcases ,n,d,e;
    cin >> testcases;
    vector<int> in,min;
    for (int i = 0; i < testcases; i++)
    {
        cin >> n >> d;
        for (int j = 0; j < n; j++)
        {
            cin >> e;
            in.push_back(e);
        }
        int res = replace_element(in,d);
        if (res == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        in.clear();
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
