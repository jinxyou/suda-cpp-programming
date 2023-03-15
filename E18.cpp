#include <iostream>

using namespace std;

int IsPrime(int Num)
{
	if(Num==1) return 0;
	if(Num==2) return 1;
	for(int i=2;i<Num;i++)
	{
		if(Num%i==0) return 0;
		if(i+1==Num) return 1;
	}
}

int main()
{
	int count=0;
	for(int i=0;i<1000;i++)
	{
		if(IsPrime(i)==1)
		{
			cout<<i<<" ";
			count++;
			while(count==8)
			{
				cout<<endl;
				count=0;
			}
		}
	}
}
