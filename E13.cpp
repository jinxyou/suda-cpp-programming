#include "iostream"
#include "algorithm"

using namespace std;
int main()
{
	int arry[12] = { 35,146,57,13,224,35,99,68,113,79,88,46 },sum=12;
	for (int i = 0; i < 12; i++)
	{
		if (arry[i] > 70)
		{
			if (arry[i] * 1.0 / 70.0 == arry[i] / 70)
			{
				sum += arry[i] / 70 - 1;
			}
			else sum += arry[i] / 70;
		}
	}
	cout << sum*0.1<<endl;
}
