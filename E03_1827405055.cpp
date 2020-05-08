#include "iostream"

using namespace std;
void main()
{
	int m,d,sum=0;
	cin>>m>>d;
	for(int i=0;i<m;i++)
	{
		switch(i)
		{
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: sum+=31; break;
		case 4:
		case 6:
		case 9:
		case 11: sum+=30; break;
		case 2: sum+=28; break;
		}
	}
	sum+=d;
	switch(int a=sum%7)
	{
	case 1: cout<<"星期天\n"; break;
	case 2: cout<<"星期一\n"; break;
	case 3: cout<<"星期二\n"; break;
	case 4: cout<<"星期三\n"; break;
	case 5: cout<<"星期四\n"; break;
	case 6: cout<<"星期五\n"; break;
	case 0: cout<<"星期六\n"; break;
	}

}