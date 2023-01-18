// Birthday Cake Candles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int birthdayCakeCandles(vector<int> in)
{
    int count=0;
    int max = in[0];
    for (int i = 1; i < in.size(); i++)
    {
        if (in[i] > max)
        {
            max = in[i];
        }
    }
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == max)
        {
            count++;
        }
    }

    return count;

}
int main()
{
    int size, e;
    cin >> size;
    vector<int> in;
    for (int i = 0; i < size ; i++)
    {
        cin >> e;
        in.push_back(e);
    }

    e = birthdayCakeCandles(in);
    cout << e;
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
