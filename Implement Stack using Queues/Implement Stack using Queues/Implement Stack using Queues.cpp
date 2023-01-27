// Implement Stack using Queues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;
class MyStack {
private:
    queue<int> q;
public:
    MyStack() {

    }

    void push(int x) {
        if (q.size() == 0)
        {
            q.push(x);
        }
        else {
            q.push(x);
            int size = q.size();
            for (int i = 0; i < size-1; i++)
            {
                q.push(q.front());
                q.pop();
            }
          

        }
    }

    int pop() {
        int e = q.front();

        q.pop();
        return e;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return !q.size();
    }
};
int main()
{
    MyStack myStack ;
    myStack.push(1);
    myStack.push(2);
    myStack.top(); // return 2
    myStack.pop(); // return 2
    myStack.empty(); // return False
 
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
