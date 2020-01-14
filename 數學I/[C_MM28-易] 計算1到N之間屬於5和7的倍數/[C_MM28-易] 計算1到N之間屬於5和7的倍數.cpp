#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		int i=0;
		int k=n;
		
		while(k>35)
		{
			i=i+35;
			cout<<i;
			k=k-35;
			if(k>35)
			cout<<" ";
		}
		cout<<endl;
	}
}
