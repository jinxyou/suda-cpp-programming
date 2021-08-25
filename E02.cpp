#include "iostream"

using namespace std;
void main()
{
	char x;
	cin>>x;
	if(x>=65&&x<=90) x+=32;
	if(x>=97&&x<=122) x-=32;
	cout<<x<<endl;
}