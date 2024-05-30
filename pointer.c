#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a, u, v;
    int *b;
    int **c;

    b = &a;
    a = 5;
    printf("%d %d\n", a, *b);
    printf("%p %p %p\n", &a, b, &b);

    //b = 0x000;
    *b = 10; // a = 10
    printf("%d %d\n", a, *b);

    a = 20;
    printf("%d %d\n", a, *b);


    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(char));

    u = 7;
    v = 9;
    swap(&u,&v);
    printf("%d %d\n", u, v);

}
