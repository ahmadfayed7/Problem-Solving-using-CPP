// Dice Tower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,e,temp;
    int t1, t2;
    int f;
    cin >> n;
    cin >> f;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t1>> t2;
        
 
        
        if (f != t1 && f != (7 - t1)&& f != t2 && f != (7 - t2))
        {
            flag ++;
        }

    }

    if (flag == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
