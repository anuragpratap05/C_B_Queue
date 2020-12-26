#include<bits/stdc++.h>
using namespace std;

class Queue
{
	int *arr;
	int f, r, cs, ms;
public:
	Queue(int ds = 5)
	{
		arr = new int[ds];
		cs = 0;
		ms = ds;
		f = 0;
		r = ds - 1;

	}

	bool full()
	{
		if (cs == ms)
		{
			return true;
		}
		return false;
	}

	void push(int data)
	{
		if (!full())
		{
			r = (r + 1) % ms;
			cs++;
			arr[r] = data;
		}
	}
	bool empty()
	{
		if (cs == 0)
		{
			return true;
		}
		return false;
	}
	void pop()
	{
		if (!empty())
		{
			f = (f + 1) % ms;
			cs--;
		}
	}
	int front()
	{
		return arr[f];
	}

};



int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue q(10);
	for (int i = 1; i <= 6; i++)
	{
		q.push(i);
	}
	q.pop();
	q.pop();
	q.push(7);
	while (!q.empty())
	{
		cout << q.front();
		q.pop();
	}




}
