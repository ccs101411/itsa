#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[5000];
	a[0]=1;a[1]=1;
	int i;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n-1]<<endl;
}
