// Backspace String Compare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool backspaceCompare(string s, string t) {

    stack<char> c1, c2;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '#')
        {
            c1.push(s[i]);
        }
        else {
            if (c1.size() != 0)
                c1.pop();
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] != '#')
        {
            c2.push(t[i]);
        }
        else {
            if (c2.size() != 0)
                c2.pop();
        }
    }
    if (c1 == c2)
        return true;
    else
        return false;
}

int main()
{
    std::cout << "Hello World!\n";
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
