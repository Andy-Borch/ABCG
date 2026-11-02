#pragma once

#include <hip/hip_runtime.h>

__global__ void scale(double alpha, double* x, int n);
