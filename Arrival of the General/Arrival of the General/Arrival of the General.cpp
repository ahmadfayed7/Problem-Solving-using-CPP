// Arrival of the General.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n,e;
    int min_index=0, max_index=0;
    cin >> n;
    cin >> e;
    int min = e, max = e;
    for (int i = 1; i < n; i++)
    {
        cin >> e;
        if (e <= min)
        {
            min = e;
            min_index = i;
        }
        else if (e > max)
        {
            max = e;
            max_index = i;
         }
    }
    if (max_index > min_index)
        cout << (max_index - 1) + (n - min_index) - 1;
    else
        cout << (max_index - 1) + (n - min_index);

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
