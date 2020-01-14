#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,m;
	while((scanf("%d %d",&n,&m))!=EOF)
	{
		if(n<=60)
		{
			float k=n;
			cout<<fixed<<setprecision(1)<<k*m<<endl;
		}
		else if(n<=120)
		{
			float k=n;
			cout<<fixed<<setprecision(1)<<(60)*m+(k-60)*m*1.33<<endl;
		}
		else
		{
			float k=n;
			cout<<fixed<<setprecision(1)<<(60)*m+(60)*m*1.33+(k-120)*m*1.66<<endl;
		}
	}
}
