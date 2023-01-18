// Breaking the Records.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> breakingRecords(vector<int>& v)
{
    vector<int> output{ 0,0 };
    int min = v[0]; int max = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            output[0]++;
            max = v[i];
        }
        else if (v[i] < min)
        {
            output[1]++;
            min = v[i];
        }
    }

    return output;
}
int main()
{
    int size, e;
    vector<int> input ,output;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> e;
        input.push_back(e);
    }

    output = breakingRecords(input);
    cout << output[0] << " " << output[1];
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
