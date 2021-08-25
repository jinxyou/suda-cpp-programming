#include "iostream"
#include "algorithm"
#include "vector"
#include "cstring"
#include "sstream"
#include "fstream"
#include <iomanip>

using namespace std;
int main()
{
	int t, temp, i;
	ifstream fin("data.txt");
	ofstream fout("Res.dat", ios::binary);
	if (fin.good() == true && fout.good() == true)
	{
		while (fin.eof() == false)
		{
			if (fin >> temp) fout.write((const char*)&temp, sizeof(int));
		}
	}
	else
	{
		if (fin.good() == false)
			cout << "Error:cannot open file 'data.txt' " << endl;
		if (fout.good() == false)
			cout << "Error:cannot open file 'Res.dat' " << endl;
	}
	fin.close();
	fout.close();

	fin.open("Res.data", ios::binary);
	fout.open("Res.txt");
	if (fin.good() == true && fout.good() == true)
	{
		i = 0;
		while (fin.eof() == false)
		{
			fin.read((char*)&temp, sizeof(int));
			if (fin.bad() == false && fin.fail() == false)
			{
				fout << setfill('C') << setw(10) << right << temp;
				i++;
				if (i % 2 == 0) fout << endl;
			}
		}
	}
}
