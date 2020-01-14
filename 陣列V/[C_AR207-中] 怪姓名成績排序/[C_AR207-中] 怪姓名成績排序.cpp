#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
	int num;
	char a[50];
};
int cmp(const void *a,const void *b)
{
	struct data *c=(struct data *)a;
	struct data *d=(struct data *)b;
	if(c->num != d->num) return  d->num- c->num;
	else return strcmp(c->a,d->a);
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	struct data dat[n];
	for(i=0;i<n;i++)
	{
		scanf("%s%d",&dat[i].a,&dat[i].num);
	}
	qsort(dat,n,sizeof(struct data),cmp);
	for(i=0;i<n;i++)
	{
		printf("%d %s %d\n",i+1,dat[i].a,dat[i].num);
	}
}
