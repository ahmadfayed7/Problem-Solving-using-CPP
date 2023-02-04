// Contains Duplicate II.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {

    map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
    {
        if (mp.count(nums[i]) == 0)
            mp[nums[i]] = i;
        else {
            if (i - mp[nums[i]] <= k)
            {
                return true;
            }
            mp[nums[i]] = i;
        }
    }
    return false;

}
int main()
{
    vector<int> in{ 1,0,1,1 };
    cout << containsNearbyDuplicate(in, 1);
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
