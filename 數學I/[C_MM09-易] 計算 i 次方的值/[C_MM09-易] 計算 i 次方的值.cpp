#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	unsigned long long int n;
	int i;
	while(scanf("%d",&i)!=EOF)
	{
		int j;
		n=1;
		if(i<=31)
		{
			for(j=0;j<i;j++)
			{
				n=n*2;
			}
			cout<<n<<endl;
		}
		else 
		{
			cout<<"Value of more than 31"<<endl;
		}
		
	}
}
