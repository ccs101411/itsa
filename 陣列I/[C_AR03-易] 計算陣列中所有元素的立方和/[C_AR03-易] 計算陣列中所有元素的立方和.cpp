#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int cnt=0;
	for(i=0;i<6;i++)
	{
		cin>>n;
		cnt=cnt+n*n*n;
	}
	cout<<cnt<<endl;
 } 
