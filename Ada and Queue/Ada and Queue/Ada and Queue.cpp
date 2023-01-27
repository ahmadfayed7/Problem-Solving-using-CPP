// Ada and Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	bool reverse = false;
	long long n;
	cin >> n;;
	string s;
	deque<int> q;
	while (n--)
	{
		cin >> s;
		if (s == "toFront")
		{
			int val;
			cin >> val;
			if (!reverse)
			{
				q.push_front(val);
			}
			else
			{
				q.push_back(val);
			}
		}
		else if (s == "front")
		{
			if (!q.empty())
			{
				if (reverse)
				{
					cout << q.back() << endl;
					q.pop_back();
				}
				else {
					cout << q.front() << endl;
					q.pop_front();
				}
			}
			else {
				cout << "No job for Ada?" << endl;
			}
		}
		else if (s == "back")
		{
			if (!q.empty())
			{
				if (reverse)
				{
					cout << q.front() << endl;
					q.pop_front();
				}
				else {
					cout << q.back() << endl;
					q.pop_back();
				}
			}
			else {
				cout << "No job for Ada?" << endl;
			}
		}
		else if (s == "reverse")
			reverse = !reverse;
		else if (s == "push_back")
		{
			int val;
			cin >> val;
			if (reverse)
			{
				q.push_front(val);
			}
			else
			{
				q.push_back(val);
			}
		}
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
