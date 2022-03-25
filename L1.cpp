#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	// deklarasikan var yg dipakai
	char jmlkata[7] = {'p','e','n','s','i','t'};
	
	cout << "Tulis Kata Yang Ingin Di balik  : "; cin.getline(jmlkata,sizeof(jmlkata));
	
	// menghitung jml karakter
	int a = strlen(jmlkata);
	
	cout << "Kata Yang Telah Di Balik Adalah : ";
	
	// melakukan loop
	for (int i=a-1; i>=0; i--)
	{
		cout << jmlkata[i] ;

	}
	
	cin.get();
	return 0;
}
