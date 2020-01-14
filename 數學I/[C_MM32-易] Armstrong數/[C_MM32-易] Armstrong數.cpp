#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		int i,j,k;
		i=n/100;
		j=(n-(i*100))/10;
		k=(n-(i*100)-(j*10));
		if((i*i*i)+(j*j*j)+(k*k*k)==n)
		{
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
}
