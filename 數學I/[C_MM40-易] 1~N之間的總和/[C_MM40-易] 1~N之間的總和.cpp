#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,cnt=1;
	for(i=1;i<n;i++)
	{
		cnt=cnt+i;
		cout<<i<<" + ";
		
		
	}
	cout<<n<<" = "<<cnt+n-1<<endl;
 } 
