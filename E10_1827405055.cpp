#include "iostream"

using namespace std;
int main()
{
	int n,i=1,sum=0,d=1;
	cin >> n;
	while (d <= n)
	{
		for (int p = 1; p <= i; p++)
		{
			sum += i;
			d++;
			if (d > n) break;
		}
		i++;
	}
	cout << sum;
}
