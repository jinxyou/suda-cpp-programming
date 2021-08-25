#include "iostream"
#include "algorithm"

using namespace std;
int main()
{
	int a[10],sum=0;
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand()%100;
		sum += a[i];
	}
	sort(a,a+10);
	cout << a[9] <<endl<< a[0] <<endl<< sum/10 <<endl;
	system("pause");
}
