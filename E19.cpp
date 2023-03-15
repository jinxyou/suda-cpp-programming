#include <iostream>
#include <string>

using namespace std;
int InverseBits(int Num)
{
	int i=0;
	while(Num)
	{
		i+=Num%10;
		i*=10;
		Num=Num/10;
	}
	return i/10;
}
int main()
{
	cout<<InverseBits(12345678);
}
