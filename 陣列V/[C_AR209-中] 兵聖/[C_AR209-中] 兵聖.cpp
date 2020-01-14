#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[500];
	int m,k;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		scanf("%d%d",&m,&k);
		if((m==1 && k==4)||(m==4 && k==1))
		{
			printf("%s General\n",a);
		}
		else if((m==1 && k==3)||(m==3 && k==1))
		{
			printf("%s Staff\n",a);
		}
		else if((m==2 && k==4)||(m==4 && k==2))
		{
			printf("%s Soldier\n",a);
		}
		else if((m==2 && k==3)||(m==3 && k==2))
		{
			printf("%s execute by shooting\n",a);
		}
		//if(i!=n-1)
		//	printf("\n");	
	}
	return 0;
	
}
