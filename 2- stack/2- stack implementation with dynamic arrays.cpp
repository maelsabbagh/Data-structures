#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;

class myStack // dynamic memory allocation
{

private:
	
	int capacity;
	int idx;
	int *arr;

	void expand() // to expand the array capacity when it is full
	{
		int *newArr = new int[capacity * 2];
		for (int i = 0; i < capacity; i++)
		{
			newArr[i] = arr[i];
		}
		capacity = capacity * 2;
		delete[]arr;
		arr = newArr;
	}
public:

	myStack()
	{
		capacity = 10;
		idx = 0;
		arr = new int[capacity];
	}

	myStack(int size) // taking the capacity as an input
	{
		capacity = size;
		idx = 0;
		arr = new int[capacity];
	}

	void push(int val)
	{
		if (idx == capacity)
		{
			expand();
		}

		arr[idx] = val;
		idx++;
	}

	void pop()
	{
		if (idx == 0)
		{
			cout << "stack is empty" << endl;
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
		return idx == 0;
	}

	bool isFull()
	{
		return idx == capacity;
	}

	void clearStack()
	{
		while (!isEmpty())
		{
			pop();
		}
	}

	void displayStack() // used for checking only 
	{
		for (int i = idx - 1; i >= 0; i--)
		{
			cout << arr[i] << endl;
		}
	}
};





int main() 
{
	myStack s(5);
	
	

	
	
	
	
	return 0;
}