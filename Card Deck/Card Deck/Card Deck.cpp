// Card Deck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void  print_neworder()
{
    int n, e;
    cin >> n;
    vector<int>a(n), b(n), c;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        mp[a[i]] = 0;
    }
    sort(b.rbegin(), b.rend());
    int j = 0;
    for (int i = n-1; i>=0; i--)
    {
        if (b[j] != a[i])
        {
            c.push_back(a[i]);
            mp[a[i]] = 1;
        }
        else
        {
            c.push_back(a[i]);
            mp[a[i]] = 1;
            for (int k = c.size() - 1; k >= 0; k--)
            {
                cout << c[k] << " ";
            }
            while (j < n && mp[b[j]] == 1 ) j++;
            c.clear();
        }
        
    }
    cout << endl;

    
  
}
int main()
{
    int t, n, e;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        print_neworder();

     
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
