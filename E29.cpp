#include<iostream>
#include<string>
using namespace std;

class CPerson
{
private:
	string  m_name;       // ����
	int   m_age;		      // ����
	char  m_sex;		     // �Ա�
public:
	CPerson(const string& name, int age, char sex)
	{
		m_name = name;
		m_age = age;
		m_sex = sex;
	}
	CPerson()
	{
		m_name = "����";
		m_age = 18;
		m_sex = 'M';
	}
	void  print()
	{
		cout << "\n������" << m_name << "\n���䣺" << m_age << "\n";
		if (m_sex == 'M')
			cout << "�Ա� ��" << endl;
		else
			cout << "�Ա� Ů" << endl;
	}
};

class CStudent :public CPerson
{
private:
	string Cname;
	int nj;
public:
	CStudent();
	CStudent(const string& name, int age, char sex, const string& collageName, int grade);
	void print()                                     //��ʾѧ�������������Ϣ
	{
		cout << "ѧУ���ƣ�" << Cname << "\n�꼶��" << nj;
		CPerson::print();
	}
};

CStudent::CStudent() :CPerson()
{
	Cname = "���ݴ�ѧ";
	nj = 1;
}

CStudent::CStudent(const string& name, int age, char sex, const string& collageName, int grade) :CPerson(name, age, sex)
{
	Cname = collageName;
	nj = grade;
}
int main()
{
	CStudent student1;
	student1.print();

	CStudent student2((string)"Liming", 21, 'M', (string)"���ݴ�ѧ", 1);
	student2.print();

	return 0;
}

