#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a;
	int i,j;
	
	for(j=0;j<n;j++)
	{
		//for(i=0;i<8;i++)
//	{	
		scanf("%d",&a);
		a=getchar();
		if(a=='N')
		{
			printf("N: Nutrition\n");
		}
		else if(a=='E')
		{
			printf("E: Exercise\n");
		}
		else if(a=='W')
		{
			printf("W: Water\n");
		}
		else if(a=='S')
		{
			printf("S: Sun\n");
		}
		else if(a=='T')
		{
			printf("T: Temper\n");
		}
		else if(a=='A')
		{
			printf("A: Air\n");
		}
		else if(a=='R')
		{
			printf("R: Rest\n");
		}
		else if(a=='t')
		{
			printf("t: trust\n");
		}
//	}
	}
}
