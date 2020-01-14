#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	cin>>n;
	int i;
	a=n/10;
	b=(n%10)/5;
	c=(n%10)%5;
	cout<<"NT10="<<a<<endl;
	cout<<"NT5="<<b<<endl;
	cout<<"NT1="<<c<<endl;
 } 
