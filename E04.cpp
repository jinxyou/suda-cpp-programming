#include "iostream"

using namespace std;
void main()
{
	int h,r,n=0;
	cin>>h>>r;
	float pi=3.14,V,i=0;
	V=r*r*pi*h/1000;
	while(i<20)
	{
		i+=V;
		n++;
	}
	cout<<n<<endl;
}