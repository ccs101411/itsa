#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	int k;
	scanf("%d %d",&a,&b); 
	k=__gcd(a,b);
	printf("%d\n",k);
}
