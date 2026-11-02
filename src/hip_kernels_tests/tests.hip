#include <hip/hip_runtime.h>
#include <vector>
#include <iostream>

int main(){
	std::vector<double> x = {1, 2, 3, 4, 5};
	double a = 2.0;

	int n = x.size();

	double* d_x = nullptr;

	hipMalloc((void**)&d_x, n * sizeof(double));
	hipMemcpy()

	return 0;
