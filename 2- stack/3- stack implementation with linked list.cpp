#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node()
	{
		data = 0;
		next = NULL;
	}
	node(int val)
	{
		data = val;
		next = NULL;
	}
};


class myStack // Using linked List
{
private:
	node *head;
public:
	myStack()
	{
		head = NULL;
	}

	void push(int val) // always inserting nodes at the head o(1)
	{
		node *newNode = new node(val);
		if (head == NULL)
		{
			head = newNode;
		}

		else
		{
			newNode->next = head;
			head = newNode;
		}
	}

	void pop()
	{
		if (head == NULL)
		{
			cout << "stack is empty" << endl;
			return;
		}

		node *deletedNode = head;
		head = head->next;
		delete deletedNode;
	}

	int top()
	{
		if (head == NULL)
		{
			cout << "stack is empty" << endl;
			return -1;
		}
		return head->data;
	}

	bool isEmpty()
	{
		return head == NULL;
	}

};





int main() 
{
	myStack s;
	s.push(1);
	s.push(2);
	s.push(3);
	while (!s.isEmpty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << endl;
	cout << s.isEmpty() << endl;
	
	s.push(50);
	cout << s.top() << endl;
	s.pop();
	s.pop();
	s.top();
	

	
	
	
	
	return 0;
}