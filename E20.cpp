#include <iostream>

using namespace std;

void Calc(int Num1, int Num2, int &GCD, int &LCM)
{
	int temp;
	if(Num1>Num2) 
	{
		temp=Num2;
		Num2=Num1;
		Num1=temp;
	}
	for(int i=Num1;i>=1;i--)
	{
		if(Num1%i==0&&Num2%i==0)
		{
			GCD=i;
			break;
		}
	}
	for(int i=Num2;i<=Num1*Num2;i++)
	{
		if(i%Num1==0&&i%Num2==0)
		{
			LCM=i;
			break;
		}
	}
}

int main()
{
	int x,y;
	int GCD,LCM;
	cin>>x>>y;
	Calc(x,y,GCD,LCM);
	cout<<GCD<<endl<<LCM;
}
