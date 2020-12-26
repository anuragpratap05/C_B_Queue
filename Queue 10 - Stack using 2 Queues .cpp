# C_B_Queue#include<bits/stdc++.h>
using namespace std;

class Stack
{
	queue<int> q1;
	queue<int> q2;
public:
	void push(int a)
	{
		q1.push(a);
	}

	void pop()
	{
		if (q1.empty())
		{
			return;
		}
		while (q1.size() > 1)
		{
			int x = q1.front();
			q1.pop();
			q2.push(x);

		}
		q1.pop();
		swap(q1, q2);
	}

	int top()
	{
		while (q1.size() > 1)
		{
			int x = q1.front();
			q1.pop();
			q2.push(x);
		}
		int ele = q1.front();
		q2.push(ele);
		q1.pop();
		swap(q1, q2);
		return ele;

	}

	int size()
	{
		return (q1.size() + q2.size());
	}

	bool empty()
	{
		return size() == 0;
	}



};


int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}




}
