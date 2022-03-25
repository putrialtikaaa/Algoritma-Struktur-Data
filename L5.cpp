#include <iostream>
#include <conio.h>
using namespace std;

struct bil
{
	int riil[2];
	int imajiner[2];
}	
kompleks;

void penjumlahan (bil &kompleks)
	{
		int r,i;
		r = kompleks.riil[0]    + kompleks.riil[1];
		i = kompleks.imajiner[0]+ kompleks.imajiner[1];
		
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "\n Maka Hasil Pembagian Dua Bilangan Komlpeks   : " <<r<< " + " <<i<< " i ";
	}

	void pengurangan (bil &kompleks)
	{
		int r,i;
		r = kompleks.riil[0]    - kompleks.riil[1];
		i = kompleks.imajiner[0]- kompleks.imajiner[1];
		
		cout << "\n Maka Hasil Pengurangan Dua Bilangan Komlpeks : " <<r<< " + " <<i<< " i ";
		
	}

	void perkalian (bil &kompleks)
	{
		int a,a2,b,b2;
		a  = kompleks.riil[0]     * kompleks.riil[1];
		a2 = kompleks.imajiner[0] * kompleks.imajiner[1];
		b  = kompleks.riil[0]     * kompleks.imajiner[1];
		b2 = kompleks.imajiner[0] * kompleks.riil[1];
		
		cout << "\n Maka Hasil Perkalian Dua Bilangan Komlpeks   : " << "("<<a<<"-"<<a2<<")" << "+" << "("<<b<<"+"<<b2<<")" << "i";
	}

	void pembagian (bil &kompleks)
	{
		int a,a2,b,b2,c,c2,d,d2;
		a  = kompleks.riil[0]     * kompleks.riil[1];
		a2 = kompleks.imajiner[0] * kompleks.imajiner[1];
		b  = kompleks.riil[0]     * kompleks.imajiner[1];
		b2 = kompleks.imajiner[0] * kompleks.riil[1];
		c  = kompleks.riil[0]     * kompleks.riil[0];
		c2 = kompleks.imajiner[0] * kompleks.imajiner[0];
		d  = kompleks.riil[1]     * kompleks.riil[1];
		d2 = kompleks.imajiner[1] * kompleks.imajiner[1];
		
		cout<<"\n Maka Hasil Pembagian Dua Bilangan Komlpeks   : " <<"["<<"("<<a<<"+"<<a2<<")"<<"/"<<"("<<c<<"+"<<c2<<")"<<"]"<<"+"<<"["<<"("<<b<<"-"<<b2<<")"<<"/"<<"("<<d<<"+"<<d2<<")"<<"]"<<"i" << endl;
		cout<<"------------------------------------------------------------------------------------------" << endl;
	}

int main()
{	
	cout <<"============================================================================================";
	cout <<"\n\n                PROGRAM OPERASI PEMBACA DUA BILANGAN KOMPLEKS" << endl;
	cout <<"============================================================================================\n\n";
	
	
	bil kompleks;
	for (int a=0;a<2;a++)
	{
		cout <<"Isi Bilangan Kompleks Ke- "<< a+1 << endl;
		
		cout <<"1). Bilangan Riil     : ";
		cin  >> kompleks.riil[a];
		
		cout <<"2). Bilangan Imajiner : ";
		cin  >> kompleks.imajiner[a];
	}
	
	for (int a=0;a<2;a++)
	{
		cout << "\n--------------------------------------------------------------------------------------" << endl;
		cout <<"\nBilangan Kompleks yang ke " << a+1 << " : " << kompleks.riil[a] << " + " << kompleks.imajiner[a] << "i";
	}
	
	cout<<endl<<endl;
	
	penjumlahan(kompleks);
	pengurangan(kompleks);
	perkalian  (kompleks);
	pembagian  (kompleks);

	getch();
}


