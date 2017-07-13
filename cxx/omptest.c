#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

void test(int n)
{
	for (volatile int i = 0; i < n * 50000; i++);
	printf("%d, ", n);
}

int main(int argc, char *argv[])
{
#pragma omp parallel for
	for(int i = 10; i > 0; --i)
		test(i);
}
