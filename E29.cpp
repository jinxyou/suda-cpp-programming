#include<iostream>
#include<string>
using namespace std;

class CPerson
{
private:
	string  m_name;       // 姓名
	int   m_age;		      // 年龄
	char  m_sex;		     // 性别
public:
	CPerson(const string& name, int age, char sex)
	{
		m_name = name;
		m_age = age;
		m_sex = sex;
	}
	CPerson()
	{
		m_name = "无名";
		m_age = 18;
		m_sex = 'M';
	}
	void  print()
	{
		cout << "\n姓名：" << m_name << "\n年龄：" << m_age << "\n";
		if (m_sex == 'M')
			cout << "性别： 男" << endl;
		else
			cout << "性别： 女" << endl;
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
	void print()                                     //显示学生对象的所有信息
	{
		cout << "学校名称：" << Cname << "\n年级：" << nj;
		CPerson::print();
	}
};

CStudent::CStudent() :CPerson()
{
	Cname = "苏州大学";
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

	CStudent student2((string)"Liming", 21, 'M', (string)"苏州大学", 1);
	student2.print();

	return 0;
}

