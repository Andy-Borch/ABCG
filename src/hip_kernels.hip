#include <hip/hip_runtime.h>
#include "hip_kernels.hpp"

__global__ void scale(double alpha, double* x, int n){
	int i = blockIdx.x * blockDim.x + threadIdx.x;
	if(i < n){
		x[i] *= alpha;
	}
}
