// H - Heap Operations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    int n, val;
    cin >> n;
    vector< pair<string, int> >v;
    multiset<int>ans;
    while (n--)
    {
        cin >> str;
        if (str == "insert") { cin >> val; ans.insert(val); v.emplace_back(make_pair(str, val)); }
        else if (str == "removeMin")
        {
            auto it = ans.begin();
            if (it != ans.end()) {
                ans.erase(it);
            }
            else {
                v.emplace_back(make_pair("insert", 0));
            }
            v.emplace_back(make_pair(str, 0));
        }
        else if (str == "getMin")
        {
            cin >> val;
            auto it = ans.begin();
            if (val == (*it) && it != ans.end())
            {
                v.emplace_back(make_pair(str, val));
            }
            else
            {
                while (!ans.empty())
                {
                    it = ans.begin();
                    if (val == (*it) || (val < (*it))) break;
                    v.emplace_back(make_pair("removeMin", 0));
                    ans.erase(it);
                }
                if (ans.empty())
                {
                    v.emplace_back(make_pair("insert", val));
                    ans.insert(val);
                }
                else if ((val < (*it)))
                {
                    v.emplace_back(make_pair("insert", val));
                    ans.insert(val);
                }
                v.emplace_back(make_pair(str, val));
            }
        }
    }
    int sz = (int)v.size();
    cout << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        if (v[i].first == "removeMin") cout << "removeMin" << '\n';
        else cout << v[i].first << " " << v[i].second << '\n';
    }
    return 0;
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
