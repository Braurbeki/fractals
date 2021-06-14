#include "Mandelbrot.h"
#include<complex>
#include <iostream>
using namespace std;
int Mandelbrot::getIterations(double& x, double& y)
{
	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations{ 0 };

	while (iterations < MAX_ITERATIONS)
	{
		z = z * z + c;

		if (norm(z) > 2) break;

		iterations++;
	}
	return iterations;
}