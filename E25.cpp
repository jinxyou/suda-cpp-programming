#include <iostream>

using namespace std;

class CComplex 
{ 
	double m_real;  
	double m_image;
public:
	void setValue(double real, double image)
	{
		m_real = real;
		m_image = image;
	}
	friend ostream &operator<<(ostream &out, const CComplex a);
	friend CComplex operator+(CComplex &a, CComplex &b);
	friend CComplex operator+(CComplex &a, double b);
	friend CComplex &operator++(CComplex &temp);
	friend CComplex operator++(CComplex &temp, int);
};

ostream &operator<<(ostream &out, const CComplex a)
{
	out << a.m_real << "+" << a.m_image << "*i" << endl;
	return out;
}

CComplex operator+(CComplex &a, CComplex &b)
{
	CComplex temp;
	temp.m_real = a.m_real + b.m_real;
	temp.m_image = a.m_image + b.m_image;
	return temp;
}

CComplex operator+(CComplex &a, double b)
{
	CComplex temp;
	temp.m_real = a.m_real + b;
	temp.m_image = a.m_image;
	return temp;
}

CComplex &operator++(CComplex &temp)
{
	temp.m_image++;
	temp.m_real++;
	return temp;
}

CComplex operator++(CComplex &temp, int)
{
	temp.m_image++;
	temp.m_real++;
	return temp;
}


int main()
{
	CComplex a,b,c;
	double d=2.0;
	a.setValue(1, 2);
	b.setValue(2, 3);
	c = a + b ;
	cout << c;
	c = c + d;
	cout << c;
	c++;
	cout << c;
	return 0;
}