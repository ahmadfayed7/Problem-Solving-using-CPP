// Plus Minus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<double> plusMinus(vector<int> & in)
{
    vector<double> out{ 0,0,0 };

    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] > 0)
        {
            out[0]++;
        }
        else if (in[i] < 0)
        {
            out[1]++;
        }
        else
        {
            out[2]++;
        }
    }
    out[0] = out[0] / double(in.size());
    out[1] = out[1] / double(in.size());
    out[2] = out[2] / double(in.size());
    return out;
}
int main()
{
    vector<int> input;
    vector<double> output;
    int size, e;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> e;
        input.push_back(e);
    }
    output = plusMinus(input);
    for (int i = 0; i < 3; i++)
    {
        cout << output[i] << endl;
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
