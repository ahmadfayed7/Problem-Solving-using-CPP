// Short Substrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string convertstring(string s)
{
    string out;
    out.push_back(s[0]);
    for (int i = 1; i < s.size()-1; i++) {

        if (s[i] == s[i-1] )
        {

            out.push_back(s[i]);
            i++;
        }


       
    }
    out.push_back(s[s.size() - 1 ]);
    return out;
}
int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cout << convertstring(s) << endl;
        s.clear();
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
