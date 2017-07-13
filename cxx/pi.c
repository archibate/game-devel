#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calculate1(long N)
{
	double pi = 1.0;
	long i = 3;
	while (i < N) {
		pi -= 1.0 / i;
		i += 2;
		pi += 1.0 / i;
		i += 2;
	}
	return pi * 4;
}

double calculate2(long N)
{
	double pi = 0.0;
	double l;
	double w = 1.0 / N;
#pragma omp parallel for private(l) reduction(+:pi)
	for (long i = 0; i < N; i++) {
		l = (i + 0.5) * w;
		pi = pi + 4.0 / (1.0 + l * l);
	}
	return pi * w;
}

int main(int argc, char *argv[])
{
	long N = argc > 1 ? (long) atoi(argv[1]) : 100;
	printf("calculating to N = %d...\n", N);
	clock_t t0 = clock();
	double pi = calculate2(N);
	clock_t t1 = clock();
	printf("PI result: %.20f\n", pi);
	printf("cost time: %2f seconds\n", (float) (t1 - t0) / CLOCKS_PER_SEC);
}
