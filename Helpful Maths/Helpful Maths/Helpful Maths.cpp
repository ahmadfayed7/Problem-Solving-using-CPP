// Helpful Maths.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
int main()
{
    string in;
    int ones = 0, twos = 0, threes = 0;
    cin >> in;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == '1')
        {
            ones++;
        }
        else if (in[i] == '2')
        {
            twos++;
        }
        else if(in[i] == '3')
        {
            threes++;
        }
    }
    for (int i = 0; i < ones; i++)
    {
        if (ones == i+1 && twos == 0&& threes==0)
        {
            cout << '1';
        }
        else
        {
            cout << '1' << '+';
        }
    }
    for (int i = 0; i < twos; i++)
    {
        if (twos == i+1 && threes == 0)
        {
            cout << '2';
        }
        else
        {
            cout << '2' << '+';
        }
    }
    for (int i = 0; i < threes; i++)
    {
        if (threes == i+1 )
        {
            cout << '3';
        }
        else
        {
            cout << '3' << '+';
        }
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
