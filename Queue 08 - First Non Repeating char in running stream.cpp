# C_B_Queue
#include<bits/stdc++.h>
using namespace std;




int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char ch;
	cin >> ch;

	int freq[27] = {0};

	queue<char > q;

	while (ch != '.')
	{
		q.push(ch);

		freq[ch - 'a']++;

		while (!q.empty())
		{
			int idx = q.front() - 'a';
			if (freq[idx] > 1)
			{
				q.pop();
			}
			else
			{
				cout << q.front() << endl;
				break;
			}
		}
		if (q.empty())
		{
			cout << "-1" << endl;
		}

		cin >> ch;
	}



}
