#include <iostream>
#include <string>
using namespace std;

class CAount
{
	float m_Money;
	string date;
	static float m_InterestRate;
	float inte;
public:
	static void SetInterestRate(float a)
	{
		m_InterestRate = a;
	}
	static float GetInterestRate()
	{
		return m_InterestRate;
	}
	int CalcDays(string date1, string date2)
	{
		int y1, m1, d1, y2, m2, d2,days;
		y1 = atoi(date1.substr(0, 4).c_str());
		m1 = atoi(date1.substr(5, 2).c_str());
		d1 = atoi(date1.substr(8, 2).c_str());
		y2 = atoi(date2.substr(0, 4).c_str());
		m2 = atoi(date2.substr(5, 2).c_str());
		d2 = atoi(date2.substr(8, 2).c_str());
		days = (d2 - d1) + (((y2 - y1) * 12 + (m2 - m1)) * 30);
		return days;
	}
	void SaveMoney(float a,string d)
	{
		m_Money += a;
		date = d;
	}
	void LendMoney(float a)
	{
		if (a > m_Money) cout << "本金不足！不允许取款！" << endl;
		else m_Money -= a;
	}
	void CalcInterest(string d)
	{
		int days = CalcDays(date, d);
		inte=m_Money*m_InterestRate/360*days;
	}
	void SaveInterest()
	{
		m_Money += inte;
	}
	float GetMoney()
	{
		return m_Money;
	}
};

float CAount::m_InterestRate = 0;


int main()
{
	CAount a;
	CAount::SetInterestRate(0.02);
	cout<<a.GetInterestRate();
	a.SaveMoney(10000, "2019-6-5");
	a.LendMoney(1000);
	cout<<a.CalcDays("2019-6-5", "2020-6-6");
	a.CalcInterest("2020-6-6");
	a.SaveInterest();
	a.GetMoney();
	return 0;
}