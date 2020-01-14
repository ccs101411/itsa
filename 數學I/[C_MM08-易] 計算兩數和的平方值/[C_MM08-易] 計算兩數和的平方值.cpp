#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int c=a+b;
		cout<<c*c<<endl;
	}
}
