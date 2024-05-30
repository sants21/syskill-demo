






#define index(r,c,w) (r*w+c)

#include <stdio.h>
#include <stdlib.h>

int main() {
    // top level arrays
    int **arr;
    arr = (int **)malloc(5 * sizeof(int *));
    for (int i=0;i<5;i++) {
        arr[i] = (int *)malloc(10 * sizeof(int));
    }
    arr[0][1] = 10;
    arr[0][5] = 20;
    arr[1][0] = 30;

    // arr[4][3] = 40;
    *(*(arr + 4) + 3) = 40;

    for (int i=0;i<5;i++) {
        free(arr[i]);
        arr[i] = NULL;
    }
    free(arr);
    arr = NULL;

    int *arr2;
    arr2 = (int *)malloc(5*10*sizeof(int));
    // arr2[3][2] = 10;
    arr2[index(3,2,10)] = 10;
    // arr2[3*10+2] = 10;


}
