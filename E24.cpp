#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double pi = 3.14;
class Circle
{
	double x, y, r;
public:
	void setc(double a, double b)
	{
		x = a;
		y = b;
	}
	void setr(double radius)
	{
		r = radius;
	}
	double calcS()
	{
		return r * r*pi;
	}
	double calcC()
	{
		return r * 2 * pi;
	}
	friend Circle operator+(Circle &a, Circle &b);
	friend Circle operator-(Circle &a, Circle &b);
	friend Circle &operator++(Circle &a);
	friend Circle operator++(Circle &a, int);
	friend Circle &operator--(Circle &a);
	friend Circle operator--(Circle &a, int);
	friend ostream &operator<< (ostream &out, const Circle &a);
	friend bool operator==(Circle &a, Circle &b);
	friend bool operator!=(Circle &a, Circle &b);
	friend bool operator&(Circle &a, Circle &b);
	friend string operator|(Circle &a, Circle &b);
};

Circle operator+(Circle &a, Circle &b)
{
	Circle temp;
	temp.x = a.x;
	temp.y = a.y;
	temp.r = a.r - b.r;
	return temp;
}

Circle operator-(Circle &a, Circle &b)
{
	Circle temp;
	temp.x = a.x;
	temp.y = a.y;
	temp.r = sqrt(fabs(a.r*a.r - b.r*b.r));
	return temp;
}

Circle &operator++(Circle &a)
{
	a.r++;
	return a;
}

Circle operator++(Circle &a, int)
{
	a.r++;
	return a;
}

Circle &operator--(Circle &a)
{
	a.r--;
	return a;
}

Circle operator--(Circle &a, int)
{
	a.r--;
	return a;
}

ostream &operator<< (ostream &out, const Circle &a)
{
	Circle temp;
	temp.setr(a.r);
	out << "圆心坐标:(" << a.x << "," << a.y << ")" << endl
		<< "半径:" << a.r << endl
		<< "周长:" << temp.calcC() << endl
		<< "面积;" << temp.calcS() << endl;
	return out;
}

bool operator<(Circle &a, Circle &b)
{
	if (a.calcS()<b.calcS()) return true;
	else return false;
}

bool operator>(Circle &a, Circle &b)
{
	if (a.calcS()>b.calcS()) return true;
	else return false;
}

bool operator==(Circle &a, Circle &b)
{
	if (a.r == b.r&&a.x == b.x&&a.y == b.y) return true;
	else return false;
}

bool operator!=(Circle &a, Circle &b)
{
	if (a.r == b.r&&a.x == b.x&&a.y == b.y) return false;
	else return true;
}

bool operator&(Circle &a, Circle &b)
{
	if (a.x == b.x&&a.y == b.y) return true;
	else return false;
}

string operator|(Circle &a, Circle &b)
{
	double d2 = pow((a.x - b.x), 2) + pow((a.y - b.y), 2), r2 = pow((a.r + b.r), 2);
	if (d2==r2) return "相切";
	else if (d2>r2) return "相离";
	else if (d2<r2&&d2>pow((a.r - b.r), 2)) return "相交";
	else return "包含";
}

int main()
{
	Circle c1,c2,c3,c4;
	c1.setc(1, 1);
	c1.setr(3);
	c2.setc(3, 4);
	c2.setr(2);
	c3 = c1 + c2;
	c4 = c1 - c2;
	cout << c3 << c4<<endl;
	c3++;
	c4--;
	cout << c3 << c4 << endl;
	if (c3 < c4) cout << "c3<c4" << endl;
	else if (c3 == c4) cout << "c3=c4" << endl;
	else cout << "c3>c4" << endl;
	if (c3&c4) cout << "c3&c4" << endl;
	cout << (c3 | c4) << endl;
	system("pause");
}
