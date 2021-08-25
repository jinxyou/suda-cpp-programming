#include "iostream"

using namespace std;
void main()
{
	int a,b,c,sum,max,min;
	float avg;
	cin>>a>>b>>c;
	avg=(a+b+c)*1.0/3.0;
	sum=a+b+c;
	if (a == b && b == c)
	{
		max = a;
		min = a;
	}
	else
	{
		max = ((a > b&&a > c) || (a == b && a > c))*a + ((b > a&&b > c) || (b == c && b > a))*b + ((c > a&&c > b) || (c == a && c > b))*c;
		min = ((a < b&&a < c) || (a == b && a < c))*a + ((b < a&&b < c) || (b == c && b < a))*b + ((c < a&&c < b) || (c == a && c < b))*c;
	}
	printf("%-8.4f%d%6d%6d\n",avg,sum,max,min);
}