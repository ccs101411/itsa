#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	while((scanf("%d",&m)!=EOF))
	{
		if(m<=800)
		{
			cout<<fixed<<setprecision(1)<<m*0.9<<endl;
		}
		else if(m<1500)
		{
			double f;
			f=m*0.9*0.9;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
		else
		{
			double f;
			f=m*0.9*0.79;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
	}
}
