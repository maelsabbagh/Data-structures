#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;

class myStack
{

private:
	int idx;
	const int static capacity=100;
	int arr[capacity];
	
public:

	myStack()
	{
		idx = 0;
	}

	void push(int val)
	{
		if (idx == capacity)
		{
			cout << "Stack is full" << endl;
			return;
		}

		arr[idx] = val;
		idx++;


	}

	void pop()
	{
		if (idx == 0)
		{
			cout << "Stack is empty" << endl;
			return;
		}

		idx--;
	}

	int top()
	{
		if (idx == 0)
		{
			cout << "stack is empty" << endl;
			return -1;
		}
		return arr[idx - 1];
	}

	bool isEmpty()
	{
		if (idx == 0)
		{
			return true;
		}
		else
			return false;
	}

	bool isFull()
	{
		if (idx == capacity)
		{
			return true;
		}
		else
			return false;
	}
	void clearStack()
	{
		while (!isEmpty())
		{
			pop();
		}
	}


};





int main() 
{
	myStack s;
	
	
	

	
	
	
	
	return 0;
}