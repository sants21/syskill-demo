#include <stdio.h>
#include <stdlib.h>

int max(int *x, int l, int r) {
  if (l == r) return x[l];
  int c = max(x,l+1,r);
  return x[l] > c ? x[l] : c;
}

int max_(int *x, int l, int r) {
  int ans = x[l];
  for (int i=l; i<=r; i++) {
    if (x[i] > ans) ans = x[i];
  }
  return ans;
}

int main() {
  int a[] = {1,2,3,4,5};
  printf("%d\n", max(a,0,4));
  printf("%d\n", max(a,1,3));
}
