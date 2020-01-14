#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,k;
	while((scanf("%d %d",&n,&k))!=EOF)
	{
		int cnt=0;
		int i;
		if(n>k)
		{
			int tmp=k;
			k=n;
			n=tmp;
		}
		for(i=n;i<=k;i++)
		{
			cnt=cnt+i;
		 } 
		 cout<<cnt<<endl;
	}
	
}
