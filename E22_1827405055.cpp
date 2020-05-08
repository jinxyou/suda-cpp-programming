#include <iostream>
using namespace std;

double pi=3.14;
class Circle
{
	double x,y,r;
public:
	void setc(double a,double b)
	{
		x=a;
		y=b;
	}
	void setr(double radius)
	{
		r=radius;
	}
	double calcS()
	{
		return r*r*pi;
	}
	double calcC()
	{
		return r*2*pi;
	}
};

int main()
{
	Circle c;
	c.setc(1,1);
	c.setr(3);
	cout<<"周长:"<<c.calcS()<<endl;
	cout<<"面积:"<<c.calcC()<<endl;
	return 0;
}
