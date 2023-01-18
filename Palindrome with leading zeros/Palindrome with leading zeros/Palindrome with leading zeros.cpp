// Palindrome with leading zeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string n;
    cin >> n;
    int ispal = 0,num_zeros=0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == '0')
        {
            num_zeros++;
        }
        else
        {
            break;
        }
    }
    
    if (num_zeros != 0)
    {
        for (int i = 0; i < num_zeros; i++)
        {
            n = '0' + n;
        }
    }

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] !=n[n.size() -1-i])
        {
            ispal = 0;
            break;
        }
        else
        {
            ispal = 1;
        }
    }

    if (ispal == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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
