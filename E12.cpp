#include "iostream"
#include "algorithm"
#include "cstring"

using namespace std;
int main()
{
	int n[26] = { 0 };
	char c[201];
	cin >> c;
	for (int i = 0; i < strlen(c); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (c[i] == 'a' + j || c[i] == 'A' + j) n[j]++;
		}
	}
	
	int max=n[0];
	for (int i = 0; i < 26; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
		}
	}
	while (1)
	{
		for (int i = 0; i < 26; i++)
		{
			if(n[i] == max)
			{
				cout <<char( 'a' + i) << " " << max<<endl;
			}
		}
		max--;
		if (max == 0) break;
	}
}
