// Mini-Max Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<long long > miniMaxSum(vector<int> in)
{
    vector<long long > out{ 0,0 };
    long long sum = 0;
    for (int i = 0; i < in.size(); i++)
    {
        sum += in[i];
    }
    out[0]=sum -in[0];
    out[1] = sum - in[0];
    for (int i = 1; i < in.size(); i++)
    {
        if (out[0] < (sum - in[i]))
        {
            out[0] = sum - in[i];
        }
        if (out[1] >(sum - in[i]))
        {
            out[1] = sum - in[i];
        }

    }

    return out;
}
int main()
{
    vector<int> in;
    vector<long long > out;
    int e;
    for (int i = 0; i < 5; i++)
    {
        cin >> e;
        in.push_back(e);
    }
    out = miniMaxSum(in);
    cout << out[1] << " " << out[0];
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
