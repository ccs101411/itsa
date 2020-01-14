#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cnt=n;
	while(n>=3)
	{
		int k=n%3;
		n=n/3;
		cnt=cnt+n;
		n=n+k;
	}
	cout<<cnt<<endl;
 } 
