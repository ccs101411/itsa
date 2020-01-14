#include<iostream>
using namespace std;

int main()
{
	int n, sum, max;
	while (cin >> n)
	{
		sum = 0;
		max = 0;
		for (int i = 1; i <= n; i++)
		{
			if (sum + i > n)
    		break;
			sum += i;
			max++;
		}
	cout << max << endl;
 	}
}
