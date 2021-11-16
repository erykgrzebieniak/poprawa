#include <iostream>
#include <fstream>

using namespace std;

fstream oplik;
fstream cplik;
int main()
{
	float a,b,c,y,d;
	oplik.open("trojki_liczb.txt", ios::in);
	cplik.open("wartosci_funkcji.txt", ios::out);
	
	if(oplik.good()==true && cplik.good()==true)
	{
		while(!oplik.eof())
		{
			oplik>>a>>b>>c;
			y=a*c+b;
			cout<<"wartosc funkcji liniowej dla a="<<a<<" b="<<b<<" oraz x="<<c<<" to y="<<y<<endl;
			cplik<<y<<endl;
		}
	}
	else
	{
		cout<<"siwy dym";
	}
	oplik.close();
	cplik.close();
	
	oplik.open("trojki_liczb.txt", ios::in);
	if(oplik.good()==true)
	{
		oplik>>a>>b>>c;
			d=a*c+b;
		while(!oplik.eof())
		{
			oplik>>a>>b>>c;
			y=a*c+b;
			if(y>d)
			{
				d=y;
			}
		}
	}
	else
	{
		cout<<"siwy dym";
	}
	oplik.close();
	
	oplik.open("trojki_liczb.txt", ios::in);
	if(oplik.good()==true)
	{
		while(!oplik.eof())
		{
			oplik>>a>>b>>c;
			y=a*c+b;
			if(y==d)
			{
				cout<<"\nnajwieksza wartosc funkcji liniowej w tym zbiorze jest dla a="<<a<<" b="<<b<<" oraz x="<<c<<" i jest to y="<<y<<endl;
				break;
			}
		}
	}
	else
	{
		cout<<"siwy dym";
	}
	oplik.close();
	return 0;
}
