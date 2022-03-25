#include <iostream>
#include <stdlib.h>
#define MAX 20
using namespace std; 

int main()
{
	int *fibo;
	int i;
	
	fibo = (int*)malloc(MAX * sizeof(int));
	
	*(fibo + 1) = 1;
	*(fibo + 2) = 1;
	
	for (i=3; i<=MAX; i++)
	* (fibo + i)= (*(fibo + i - 2) + *(fibo + i - 1));
	printf("%d Bilangan Fibonaci Pertama adalah : \n",MAX);
	
	for (i=1;i<MAX;i++)
	printf("%d",*(fibo+i));
}
