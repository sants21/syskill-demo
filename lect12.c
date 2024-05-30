/*
Lecture 11
*/

#define LARGE 10000000UL
#define MEDIUM 100000UL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>


void simple_loop() {
  long a = 0;
  for (long i=0;i < LARGE;i++) {
    a = a+1;
  }
}

void simple_loop_double() {
  double a = 0;
  for (long i=0;i < LARGE;i++) {
    a = a+1;
  }
}

void simple_copy() {
  int n = MEDIUM;
  int *a = (int *)malloc(n*sizeof(int));
  int *b = (int *)malloc(n*sizeof(int));
  for (int i=0;i<n;i++) {
    a[i] = b[i];
  }
  free(a);
  free(b);
}

void mem_copy() {
  int n = MEDIUM;
  int *a = (int *)malloc(n*sizeof(int));
  int *b = (int *)malloc(n*sizeof(int));
  memcpy(b,a,n*sizeof(int));
  free(a);
  free(b);
}

// takes a function pointer
unsigned long benchmark(void (*f)(), int iter) {
  struct timeval begin, end;

  // start the clock
  gettimeofday(&begin, NULL);

  for (int i=0;i<iter;i++) (*f)();

  // stop the clock
  gettimeofday(&end, NULL);

  return (1000000UL*(end.tv_sec - begin.tv_sec) +
     (end.tv_usec - begin.tv_usec))/iter;
}

int main() {

  printf("simple_loop time: %lu usec\n", benchmark(simple_loop,10));
  printf("simple_loop_double time: %lu usec\n", benchmark(simple_loop_double,10));
  printf("simple_copy time: %lu usec\n", benchmark(simple_copy,10));
  printf("mem_copy time: %lu usec\n", benchmark(mem_copy,10));

}
