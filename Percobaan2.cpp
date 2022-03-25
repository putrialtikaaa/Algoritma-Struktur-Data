#include <iostream>
#define SIZE 12
using namespace std;

int main()
{
	// Menghitung total dari nilai yang terdapat pada array
	
	int a [SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	int i = 0;
	int total = 0;
	
	for(i=0; i<SIZE; ++i)
	{
		total +=a[i];	
	}
	
	printf ("Total Elemen Yang Terdapat di Array : %d \n", total);	
	
	cin.get();
	return 0;
}
