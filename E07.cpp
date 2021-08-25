#include "iostream"
#include "cmath"

using namespace std;
int main()
{
	int a, n, S=0;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		S += (pow(10, i) - 1) / 9 * a;

	}
	cout << S<< endl;
}
