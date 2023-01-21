// Time Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string converttime(string n)
{
    if (n[8] == 'P')
    {
        int h = ((n[0] - '0') * 10) + (n[1] - '0');
        if (h < 12)
        {
            h = (h + 12) % 24;
            n[0] = h / 10 + '0';
            n[1] = h % 10 + '0';
        }
    }
    else {
        int h = ((n[0] - '0') * 10) + (n[1] - '0');
        if (h == 12)
        {
            
            n[0] ='0';
            n[1] = '0';
        }
    }

    n.pop_back();
    n.pop_back();
    return n;
}

int main()
{
    string input,output;
    cin >> input;
    output = converttime(input);
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
