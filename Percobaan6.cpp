#include <iostream>
using namespace std;

int main()
{
	// Program Mengakses & Mengubah Isi Suatu Variabel Pointer
	float d = 54.5f, *pd;
	
	printf("Isi d mula-mula = %g\n", d);
	
	pd = &d;
	*pd += 10;
	
	printf("Isi d sekarang = %g\n", d);
	
	cin.get();
	return 0;
}
