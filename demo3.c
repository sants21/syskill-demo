#include <stdio.h>
#include <stdlib.h>

int arr[2];

void a() {
  int data[2];
  printf("a() -- %p %p\n", &data[0], &data[1]);
}

void b() {
  int *data = (int *)malloc(2 * sizeof(int));
  printf("b() -- %p %p\n", &data[0], &data[1]);
}

int main() {
  int data[2];
  int x,y;
  printf("main() -- %p %p\n", &data[0], &data[1]);
  printf("arr -- %p %p\n", &arr[0], &arr[1]);
  printf("x,y -- %p %p\n", &x, &y);
  a();
  b();
  return 0;
}
