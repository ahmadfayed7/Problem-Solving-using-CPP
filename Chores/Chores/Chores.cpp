// Chores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main()
{
    int n, k, x, e,out =0;
    vector<int> v;
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i <v.size()-k; i++)
    {
        out += v[i];
    }
    out += k * x;
    std::cout <<out;
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
