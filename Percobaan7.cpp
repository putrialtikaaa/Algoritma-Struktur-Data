#include <iostream>
using namespace std;

int main()
{
	// Mengakses elemen array dengan pointer
	int my_array[] = { 1,23,17,4,-5,100};
	int *ptr;
	
	int i;
	
	/* Variabel pointer ptr menunjuk ke element ke- 0 dari myarray */
	ptr = &my_array[0]; 
	printf("\n\n");
	for (i=0; i<6; i++)
	{
		printf("my_array[%d] = %d   ", i,my_array[i]);
		printf("ptr + &d     = %d\n", i, *(ptr + i));
	}
	
	cin.get();
	return 0;
}
