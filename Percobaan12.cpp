#include <iostream>
#include <string.h>
using namespace std;

void tampil (struct dtnilai *p) ;

struct dtnilai
{
	char nrp[10];
	char nama[20];
	double nilai;
};

struct dtnilai my_struct;

int main()
{
	struct dtnilai *st_ptr; st_ptr
	= &my_struct;
	strcpy(my_struct.nrp,"01");
	printf("\n%s ",my_struct.nrp);
	
	strcpy(my_struct.nama,"Arini");
	printf("\n%s ",my_struct.nama);
	my_struct.nilai = 63.6;
	tampil(st_ptr);
}

void tampil(struct dtnilai *p) 
{
	printf("\n%s ", p->nrp);
	printf("%s ", p->nama);
	printf("%f/n", p->nilai);
}