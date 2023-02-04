// Chat Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<string> v;
    string s;
    map<string,int> mp;
    
    cin >> n;
    for (int i =0;i<n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = n-1; i >=0; i--)
    {
        if (mp[v[i]] == 0)
        {
            cout << v[i] << endl;
            mp[v[i]] = 1;
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
