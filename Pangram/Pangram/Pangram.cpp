// Pangram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string s;
    int n,count =0;
    int arr[26];
    cin >> n;
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            
            for (int j = 0; j < n; j++)
            {
                if ((i+65 == s[j] || (i+97 ) == s[j] ) &&arr[i] !=1)
                {
                    arr[i] = 1;
                    count++;
                }
                else {
                  
                }
            }
        }
        if (count == 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
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
