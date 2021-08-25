#include "iostream"

using namespace std;
int main()
{ 
	char x = ' ';
	int n = 0;
	for (int i = 32; i <= 126; i++)
	{
		x++;
		printf("%c", x);
		n++;
		if (n == 5)
		{
			n = 0;
			cout << endl;
		}
	}
}
