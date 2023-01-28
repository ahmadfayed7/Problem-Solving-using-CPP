// Last Stone Weight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
    multiset<int> ms;

    for (int i : stones)
    {
        ms.insert(i);

    }
    while (ms.size() > 1)
    {
        int max1 = *(ms.rbegin());
        ms.erase(ms.lower_bound(max1));
        int max2 = *(ms.rbegin());
        ms.erase(ms.lower_bound(max2));
        if (max1 > max2)
        {
            ms.insert(max1 - max2);
        }
        else if (max1 < max2)
        {
            ms.insert(max2 - max1);
        }
        else
        {

        }
    }
    if (ms.size() == 0)
    {
        return 0;
    }
    else
    {
        return  *(ms.rbegin());
    }

}
int main()
{
    vector<int> in{ 2,2 };
    cout << lastStoneWeight(in);
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
