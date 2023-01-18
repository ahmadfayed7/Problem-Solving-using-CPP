// A Very Big Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
using namespace std;
long long aVeryBigSum(vector<long long>& in)
{
    long long out=0;
    
    for (int i = 0; i < in.size(); i++)
    {
        out += in[i];
    }
    return out;
}
int main()
{
    vector<long long> input;
    long long output;
    int size, e;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> e;
        input.push_back(e);
    }
    output = aVeryBigSum(input);

    cout << output;

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
