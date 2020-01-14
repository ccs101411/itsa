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
			if(i%3==0)
			{
				cnt=cnt+i;
			}
		 } 
		 cout<<cnt<<endl;
	}
}

