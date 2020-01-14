#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,j;
	while((scanf("%d",&n))!=EOF)
	{
		//float k;
		if(n*1000%238==0)
		cout<<n*100/23.8<<endl;
		else
		{
			 j=n*100/23.8;
		cout<<j+1<<endl;
	}
	}
	
}
