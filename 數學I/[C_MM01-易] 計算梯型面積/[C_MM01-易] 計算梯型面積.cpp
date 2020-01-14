#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c;
	while(scanf("%f%f%f",&a,&b,&c)!=EOF)
	{
		cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(a+b)*c/2<<endl;
	 } 
}
