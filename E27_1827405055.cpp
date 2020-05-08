#include <iostream>
#include <cmath>

using namespace std;

class CPoint
{
	int m_x; //点的 X 坐标
	int m_y; //点的 Y 坐标 o
public:
	CPoint()
	{
		m_x=0;
		m_y=0;
	}
	CPoint (int x,int y)
	{
		m_x=x;
		m_y=y;
	}
	int getx()
	{
		return m_x;
	}
	int gety()
	{
		return m_y;
	}
	void showPoint()
	{
		cout<<"("<<this->m_x<<","<<this->m_y<<")"<<endl;
	}
};
	
class CLine
{
	CPoint m_point1;
	CPoint m_point2;
public:
	CLine()
	{
		CPoint m_point1;
		CPoint m_point2;
	}
	CLine(int x1,int y1,int x2,int y2)
	{
		CPoint point1(x1,y1);
		CPoint point2(x2,y2);
		m_point1=point1;
		m_point2=point2;
	}
	void ShowLine()
	{
		cout<<"Point 1 is:";
		m_point1.showPoint();
		cout<<"Point 2 is:";
		m_point2.showPoint();
	}
	double distance()
	{
		double d;
		int x1,x2,y1,y2;
		x1=m_point1.getx();
		y1=m_point1.gety();
		x2=m_point2.getx();
		y2=m_point2.gety();
		d=sqrt(double((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
		return d;
	}
};
	
int main()
{
	CLine line1;
	line1.ShowLine();
	cout<<"Length="<<line1.distance()<<endl;
	CLine line2(1,1,5,5);
	line2.ShowLine();
	cout<<"Length="<<line2.distance()<<endl;
}
