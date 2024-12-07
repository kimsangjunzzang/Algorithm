#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstring>
using namespace std;

int n;
vector<int> vec;
int vecSize = 0;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		vector<int> temp;
		temp.push_back(n);
		temp.push_back(i);
		int j = 0;
		while (true)
		{
			if (temp[j] - temp[j + 1] >= 0)
			{
				temp.push_back(temp[j] - temp[j + 1]);
				j++;
			}
			else
				break;
		}
		if (vecSize < temp.size())
		{
			vec = temp;//벡터란 값에 temp담음
			vecSize = temp.size();
		}
	}
	cout << vecSize << "\n";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}

}