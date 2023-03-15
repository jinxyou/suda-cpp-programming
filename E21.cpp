#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void printOut(int Num)
{
	cout<<setw(10)<<right<<Num<<endl;
}

void printOut(float Num)
{
	cout<<setprecision(4)<<Num<<endl;
}

void printOut(string str)
{
	cout<<setw(10)<<right<<str<<endl;
}

int main()
{
	printOut(10);
	printOut(float(3.33));
	printOut("Hello");
}
