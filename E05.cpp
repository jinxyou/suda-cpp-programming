#include "iostream"

using namespace std;
void main()
{
	int d;
	cin>>d;
	float s1,s2;
	s1=d*1.0/1.2;
	s2=d*1.0/3.0+27+23;
	if(s1<s2) cout<<"步行快"<<endl;
	else if(s1>s2) cout<<"骑车快"<<endl;
	else cout<<"一样快"<<endl;
}