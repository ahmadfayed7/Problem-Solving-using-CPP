// Intersection of Multiple Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> intersection(vector<vector<int>>& nums) {
    unordered_map<int, int> mp;
    vector<int> out;
    for (auto v : nums)
    {
        for (auto e : v)
        {
            if (mp.count(e))
            {
                mp[e]++;
            }
            else {
                mp[e] = 1;
            }

        }
    }


    for (auto m : mp)
    {
        if (m.second == nums.size())
        {
            out.push_back(m.first);
        }
    }
    sort(out.begin(), out.end());
    return out;
}
int main()
{
    vector<vector<int>> in { {3, 1, 2, 4, 5}, { 1, 2, 3, 4 }, {3, 4, 5, 6} };

    vector<int> out = intersection(in);
    
    for (auto e : out)
    {
        cout << e << " ";
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
