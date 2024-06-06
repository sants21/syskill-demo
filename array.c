#include <stdio.h>

int main() {

    int numbers[10];
    int *numbersp;

    numbersp = numbers;

    numbers[5] = 6;
    printf("%d\n", numbers[5]);
    printf("%d\n", numbers[4]);

    printf("%p\n", numbers);
    printf("%p\n", &numbers);

    printf("%p\n", &numbers[1]);
    printf("%p\n", &numbers[2]);

    printf("%d\n", *numbersp);
    printf("%d\n", *(numbersp + 1));
    printf("%d\n", *(numbersp + 2));

    // array[index] === *(array + index)

    double d = 5.5;
    double *dp = &d;

    char c = 'c';
    char *cp = &c;

    *cp = *dp;

}
