#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		int i;
		cout<<"1 ";
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				cout<<i<<" ";
			}
		}
		cout<<n<<endl;
	}
 } 
