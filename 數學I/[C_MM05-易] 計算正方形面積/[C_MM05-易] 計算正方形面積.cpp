#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double rounding(double, int);
int main()
{
	float a;
	while(scanf("%f",&a)!=EOF)
	{
		float b=a*a;
		float c;
		c=rounding(b,1);
		cout<<fixed<<setprecision(1)<<c<<endl; 
	}
}
double rounding(double num, int index)
{
    bool isNegative = false; // whether is negative number or not
	
    if(num < 0) // if this number is negative, then convert to positive number
    {
        isNegative = true;	
        num = -num;
    }
	
    if(index >= 0)
    {
        int multiplier;
        multiplier = pow(10, index);
        num = (int)(num * multiplier + 0.5) / (multiplier * 1.0);
    }
	
    if(isNegative) // if this number is negative, then convert to negative number
    {
        num = -num;
    }
	
    return num;
}
