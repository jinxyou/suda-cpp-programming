#include "iostream"

using namespace std;
int main()
{
	int N,sum=0,p=200;
	float k;
	cin >> N >> k;
	for (int i = 1; i <= 20; i++)
	{
		sum += N;
		p *= 1 + k / 100.0;
		if (sum >= p)
		{
			cout << i << endl;
			break;
		}
		if (i == 20) cout << "Impossible";
	}
}
