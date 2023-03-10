#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string c;
	int cont1=0,cont2=0,cont3=0,cont4=0;
	cout<< "ingrese texto: ";
	cin>>c;

	for (int i = 0; i < c.size(); i++)
	{
		if (c[i]=='a')
		{
			cont1++;
		}
		if (c[i]=='b')
		{
			cont2=cont2+2;
		}
		if (c[i]=='d')
		{
			cont3=cont3+3;
		}
		if (c[i]=='t')
		{
			cont4=cont4+4;
		}
	}
	
	cout<< "hay: " << cont1+cont2+cont3+cont4;

	return (0);
}