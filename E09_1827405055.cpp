#include "iostream"

using namespace std;
int main()
{
	int jw,jm,jc,m = 100;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 33; j++)
		{
			for (int k = 0; k < 300; k=k+3)
			{
				if (i * 5 + j * 3 + k / 3 == 100 && i + j + k == 100) cout << i << " " << j << " " << k << endl;
			}
		}
	}
}
