// Balanced Brackets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;
string validBrackets(string s)
{
    map<char, char> m;
    m[')'] = '(';
    m['}'] = '{';
    m[']'] = '[';
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else {
            if (st.size() != 0 && st.top() == m[s[i]]  )
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if ( st.size() != 0)
    {
        return "NO";
    }
    else {
        return "YES";
    }


}
int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cout << validBrackets(s) << endl;
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
