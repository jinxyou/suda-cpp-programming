#include "iostream"
#include "algorithm"

using namespace std;
int main()
{
	int arry[10] = { 13,24,35,46,57,35,79,35,93 },m;
	cin >> m;
	arry[9] = m;
	sort(arry, arry + 10);
	for (int i = 0; i < 10; i++)
	{
		if (arry[i] == arry[i + 1]) continue;
		else cout << arry[i]<<endl;
	}
}
