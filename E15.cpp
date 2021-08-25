#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;
int main()
{
	int n,m;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (vector<int>::reverse_iterator it = a.rbegin(); it != a.rend(); it++)
	{
		cout << *it << endl;
	}
	system("pause");
}
