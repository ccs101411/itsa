#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		int i,cnt=0;
		for(i=1;i<=n;i++)
		{
			if(i%2==0 && i%3==0 && i%12!=0)
			{
				cnt=cnt+i;
			}
		}
		cout<<cnt<<endl;
	}
}
