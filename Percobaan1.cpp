#include <iostream>
using namespace std;

int main()
{
	// Memberikan nilai pada array dan mengakses array
	
	int n [10];
	int i, j;
	
	for (i=0; i<10; i++)
	{
		n[i] = i + 100;
	}
	
	for (j=0; j<10; j++)
	{
		printf ("Element[%d] = %d \n", j, n[j]);
	}
	
	cin.get();
	return 0;
}
