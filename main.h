#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#define MAX_SOURCE_SIZE (0x100000)

using namespace std;

FILE* kernel_source;
FILE* output;

const int LIST_SIZE = 1000;
int *A, *B, *C;
char *source_str;
size_t source_size;

void read_inputs();
void load_kernel();
void write_output();