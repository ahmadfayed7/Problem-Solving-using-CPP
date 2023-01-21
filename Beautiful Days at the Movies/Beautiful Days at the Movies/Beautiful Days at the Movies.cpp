// Beautiful Days at the Movies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int reverse(int num)
{
	int reverse = 0;
	while (num >0 )
	{
		reverse = reverse * 10 + num % 10;
		num = num / 10;
	}
	return reverse;
}

int main()
{
	int i, j, k;
	int count = 0;
	cin >> i >> j >> k;

	for (int e = i; e <= j; e++)
	{
		int r = reverse(e);
		if (abs(r - e) % k == 0)
			count++;

	}
   cout << count;
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
