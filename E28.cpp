#include <iostream>
#include <cmath>

using namespace std;

class CTime
{
	int m_hour,m_minute,m_second;
public:
	CTime(int hour=0,int minute=0,int second=0); //���ʱ��Ϸ�����ֵ������ֵ 0 ʱ 0 �� 0 ��
	int SetTime(int hour=0,int minute=0,int second=0); //���ʱ��Ϸ�����ֵ������ 1�����򲻸�ֵ�������� 0
	int getHour();
	int getMinute();
	int getSecond();
	void ShowTime(bool flag);
	//flag Ϊ True ���� 24 Сʱ����ʾʱ�䣬������ AM PM �ķ�ʽ��ʾ
};

CTime::CTime(int hour,int minute,int second)
{
	if(hour>=0&&hour<24&&minute>=0&&minute<60&&second>=0&&second<60)
	{
		m_hour=hour;
		m_minute=minute;
		m_second=second;
	}
	else
	{		
		m_hour=0;
		m_minute=0;
		m_second=0;
	}
}

int CTime::SetTime(int hour,int minute,int second)
{
	if(hour>=0&&hour<24&&minute>=0&&minute<60&&second>=0&&second<60)
	{
		m_hour=hour;
		m_minute=minute;
		m_second=second;
		return 1;
	}
	else
	{		
		return 0;
	}
}

int CTime::getHour()
{
	return m_hour;
}

int CTime::getMinute()
{
	return m_minute;
}

int CTime::getSecond()
{
	return m_second;
}

void CTime::ShowTime(bool flag)
{
	if(flag==true) cout<<m_hour<<":"<<m_minute<<":"<<m_second<<endl;
	else
	{
		if(m_hour>=1&&m_hour<=12) cout<<m_hour<<":"<<m_minute<<":"<<m_second<<" AM\n";
		else 
		{
			cout<<m_hour-12*(m_hour!=0)+12*(m_hour==0)<<":"<<m_minute<<":"<<m_second<<" PM\n";
		}
	}
}


class CDate
{
	int m_year,m_month,m_day;
public:
	CDate(int year=2000,int month=1,int day=1);
	//������ںϷ�����ֵ������ֵ 2000 �� 1 �� 1 ��
	int SetDate(int year=2000,int month=1,int day=1);
	//������ںϷ�����ֵ������ 1�����򲻸�ֵ�������� 0
	int GetYear();
	int GetMonth();
	int GetDay();
	void ShowDate(bool flag);
	//flag Ϊ TRUE���������ĵķ�ʽ��ʾ���ڣ������� MM/DD/YYYY �ķ�ʽ��ʾ����
};

CDate::CDate(int year,int month,int day)
{
	if(month>=1&&month<=12&&day>0)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				if(day<=31)
				{
					m_year=year;
					m_month=month;
					m_day=day;
				}
				else
				{
					m_year=2000;
					m_month=1;
					m_day=1;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day<=30)
				{
					m_year=year;
					m_month=month;
					m_day=day;
				}
				else
				{
					m_year=2000;
					m_month=1;
					m_day=1;
				}
				break;
			case 2:
				if((year%4==0&&year%100!=0)||year%400==0)
				{
					if(day<=29)
					{
						m_year=year;
						m_month=month;
						m_day=day;
					}
					else
					{		
						m_year=2000;
						m_month=1;
						m_day=1;
					}
				}
				else
				{
					if(day<=28)
					{
						m_year=year;
						m_month=month;
						m_day=day;
					}
					else
					{		
						m_year=2000;
						m_month=1;
						m_day=1;
					}
				}
				break;
		}
	}
	else
	{		
		m_year=2000;
		m_month=1;
		m_day=1;
	}
}

int CDate::SetDate(int year,int month,int day)
{
	if(month>=1&&month<=12&&day>0)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				if(day<=31)
				{
					m_year=year;
					m_month=month;
					m_day=day;
					return 1;
				}
				else return 0;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day<=30)
				{
					m_year=year;
					m_month=month;
					m_day=day;
					return 1;
				}
				else return 0;
				break;
			case 2:
				if((year%4==0&&year%100!=0)||year%400==0)
				{
					if(day<=29)
					{
						m_year=year;
						m_month=month;
						m_day=day;
						return 1;
					}
					else return 0;
				}
				else
				{
					if(day<=28)
					{
						m_year=year;
						m_month=month;
						m_day=day;
						return 1;
					}
					else return 0;
				}
				break;
		}
	}
	else return 0;
}

int CDate::GetDay()
{
	return m_day;
}

int CDate::GetMonth()
{
	return m_month;
}

int CDate::GetYear()
{
	return m_year;
}

void CDate::ShowDate(bool flag)
{
	if(flag==true) cout<<m_year<<"��"<<m_month<<"��"<<m_day<<"��"<<endl;
	else cout<<m_month<<"/"<<m_day<<"/"<<m_year<<endl;
}

class CDateTime
{
	CTime m_time;
	CDate m_date;
public:
	CDateTime()
	{
		CTime m_time;
		CDate m_date;
	}
	CDateTime(int y,int m,int d,int h,int min,int s)
	{
		m_time.SetTime(h,min,s);
		m_date.SetDate(y,m,d);
	}
	void ShowDateTime(bool f1,bool f2)
	{
		m_date.ShowDate(f1);
		m_time.ShowTime(f2);
	}
	int SetDateTime(int y,int m,int d,int h,int min,int s)
	{
		int s1,s2;
		s1=m_date.SetDate(y,m,d);
		s2=m_time.SetTime(h,min,s);
		if(s1==1&&s2==1) return 1;
		else if(s1==0&&s2==1) return -1;
		else return -2;
	}
	int GetMonth()
	{
		return m_date.GetMonth();
	}
	int GetMinute()
	{
		return m_time.getMinute();
	}

	//��ӱ�Ҫ�Ĺ��캯��
	//int SetDateTime(...); �Լ���Ʋ��������Ǹú����ķ���ֵ���Ա�ʾȫ����ȷ�����ڲ��ԡ�ʱ�䲻�Ե����
	//void ShowDateTime(...); �Լ���Ʋ��������ǿ����������ں��������ڸ�ʽ���Լ� 24Сʱ�� AM PM �����Կ���
	//����Լ���Ϊ��Ҫ��������Ա����
};

int main()
{
	CDateTime d1(2014, 5, 2, 27, 12, 5);
	d1.ShowDateTime(false, true); //�� 1 ��������ʾ��Ӣ�ķ�ʽ��ʾ����, �� 2 ��������ʾ�� 24 Сʱ�Ʒ�ʽ��ʾʱ��
	CDateTime d2;
	d2.ShowDateTime(true, false); //�� 1 ��������ʾ�����ķ�ʽ��ʾ����, �� 2 ��������ʾ�� AM PM �ķ�ʽ��ʾʱ��
	int iStatus;
	iStatus=d2.SetDateTime(2014, 5, 2, 21, 55, 5);
	switch(iStatus)
	{
		case 1:
		cout<<"���ں�ʱ������������ȷ!"<<endl;
		break;
		case -1:
		cout<<"�����������ò���ȷ!"<<endl;
		break;
		case -2:
		cout<<"ʱ���������ò���ȷ!"<<endl;
		break;
	}
	d2.ShowDateTime(false, false); //�� 1 ��������ʾ��Ӣ�ķ�ʽ��ʾ����, �� 2 ��������ʾ�� AM PM �ķ�ʽ��ʾʱ��
	cout<<"��="<<d2.GetMonth()<<endl; //���濼��һ�����ʵ�ִ˲�����
	cout<<"����="<<d2.GetMinute()<<endl; //���濼��һ�����ʵ�ִ˲�����
}
