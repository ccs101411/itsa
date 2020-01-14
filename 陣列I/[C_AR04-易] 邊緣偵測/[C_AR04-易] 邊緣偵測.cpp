#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		int m,k,x;
		cin>>m>>x;
		int j;
		int a[m][x];
		for(j=0;j<m;j++)
		{
			for(k=0;k<x;k++)
			{
				cin>>a[j][k];
			}
		}
		if(i>0) cout<<endl;
		for(j=0;j<m;j++)
		{
			for(k=0;k<x;k++)
			{
				if(a[j][k]==0)
				{
					if(k!=x-1)
					cout<<"_ ";
					else 
					cout<<"_ ";
				}
				else if(a[j][k]==1 &&((a[j+1][k]==1)&&j!=m-1) && ((a[j-1][k]==1)&&j!=0) && ((a[j][k+1]==1)&&k!=x-1) && ((a[j][k-1]==1)&&k!=0))
				{
					if(k!=x-1)
					{
						cout<<"_ ";
					}
					else
					cout<<"_ ";
				}
				else
				{
					if(k!=x-1)
					{
						cout<<"0 ";
					}
					else
					cout<<"0 ";
				}
			}
			cout<<endl;
		}
	}
}
