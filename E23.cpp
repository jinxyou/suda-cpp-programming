#include <iostream>

using namespace std;

double pi=3.14;
class Column
{
	double	x,y,r,h,Sb,C,Sl,V;
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
	void seth(double height)
	{
		h=height;
	}
	double calcSb()
	{
		Sb=r*r*pi;
		return Sb;
	}
	double calcC()
	{
		C=r*2*pi;
		return C;
	}
	double calcSl()
	{
		Sl=C*h;
		return Sl;
	}
	double calcV()
	{
		V=Sb*h;
		return V;
	}
}; 

int main()
{
	Column c;
	c.setc(1,1);
	c.setr(3);
	c.seth(4);
	cout<<"�����:"<<c.calcSb()<<endl;
	cout<<"�����ܳ�:"<<c.calcC()<<endl;
	cout<<"�����:"<<c.calcSl()<<endl; 
	cout<<"���:"<<c.calcV()<<endl; 
	return 0;
}
