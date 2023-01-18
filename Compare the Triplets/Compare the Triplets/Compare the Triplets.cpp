// Compare the Triplets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std; 
vector<int> compareTriplets(vector<int>& a, vector<int>& b)
{
    vector<int> res{ 0,0 };
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
            res[0] += 1;
        else if (a[i] < b[i])
            res[1] += 1;
        else
        {

        }
    }
    return res;
}
int main()
{
    vector<int> a, b,out;
    int e;
    for (int i = 0; i < 3; i++)
    {
        cin >> e;
        a.push_back(e);
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> e;
        b.push_back(e);
    }
    out = compareTriplets(a, b);

    cout << out[0] << " " << out[1];
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
