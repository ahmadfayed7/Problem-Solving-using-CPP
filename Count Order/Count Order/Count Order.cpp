// Count Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,e;
    vector <int> a, b,v;
    int f = 0, l = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        a.push_back(e);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        b.push_back(e);
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back( i + 1);
    }
    int i = 1;
    do {
        if (v == a)  f = i;
        if (v == b)  l=i;
        i++;
    } while (next_permutation(v.begin(),v.end()));
        cout << abs(f - l);
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
