#ifndef KERNEL_H
#define KERNEL_H

#include <cuda.h>
#include <vector_types.h>

void kernelVersionVis(uchar4 *pos, int width, int height, int major, int minor);

#endif /* KERNEL_H*/