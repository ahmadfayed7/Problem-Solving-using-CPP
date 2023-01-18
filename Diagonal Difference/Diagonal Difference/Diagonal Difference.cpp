// Diagonal Difference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
int DiagonalDifference(vector<vector<int>> input)
{
    int sum1 = 0,sum2=0;
    for (int i = 0; i < input.size(); i++)
    {
        sum1 += input[i][i];
    }
    for (int i = 0; i < input.size(); i++)
    {
        sum2 += input[i][input.size() -i-1];
    }

    if (sum1 > sum2)
    {
        return sum1 - sum2;
    }
    else
    {
        return sum2 - sum1;
    }
     
}

int main()
{
    int size,e,out;
    vector<vector<int>> input;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        vector<int> temp;
        for (int j = 0; j < size; j++)
        {
            cin >> e;
            
            temp.push_back(e);
        }
        input.push_back(temp);
        temp.clear();
    }
    out = DiagonalDifference(input);
    cout << out;
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
