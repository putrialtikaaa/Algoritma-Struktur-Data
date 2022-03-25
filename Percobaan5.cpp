#include <iostream>
using namespace std;

// Program merubah isi variabel melalui pointer
int main()
{
	/* x & y bertipe int */
	int y, x = 87;
	int *px;
	
	/* variabel pointer yang menunjuk ke data yang bertipe int */
	
	x = 87;
	
	/* px diisi dengan alamat dari variabel x */
	px = &x; 
	
	/* y diisi dengan nilai yang ditunjuk oleh px */
	y = *px;
	
	printf("Alamat x                    = %p\n", &x);
	printf("Isi px                      = %p\n", px);
	printf("Isi x                       = %d\n", x);
	printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	printf("Nilai y                     = %d\n", y);
	
	cin.get();
	return 0;
}
