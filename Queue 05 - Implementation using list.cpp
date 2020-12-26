# C_B_Queue#include<bits/stdc++.h>
using namespace std;

class Queue
{
	int cs;
	list<int> l;
public:
	Queue()
	{
		cs = 0;
	}

	void push(int data)
	{
		cs++;
		l.push_back(data);
	}
	bool empty()
	{
		return cs == 0;
	}
	void pop()
	{
		if (!empty())
		{
			cs--;
			l.pop_front();
		}
	}
	int front()
	{
		return l.front();
	}
};



int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue q;
	for (int i = 1; i <= 10; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}




}
