#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int testcase,t;
    cin >> testcase;
    for (t = 0; t < testcase; t++) 
	{
        int num,i;
        cin >> num;
        string str;
        cin >> str;
        int cnt = 0;
        for (i = 0; i < num; i++)
		{
            if (str[i] == '.') 
			{
                cnt++;
                if (i + 1 < num) 
				{
                    str[i+1] = '#';
                }
                if (i + 2 < num) 
				{
                    str[i+2] = '#';
                }
            }
        }
        cout << cnt << endl;
    }
}
