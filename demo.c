#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int *number = NULL;
    float *tenFloats;
    char *word;

    //printf("content: %d\n", *number);
    //printf("location: %p\n", number);

    number = (int *)malloc(10*sizeof(int));
    memset(number, 0xff, 10*sizeof(int));
    for (int i=0;i<10;i++)
        printf("0x%x\n", *(number+i));
        //printf("%d %x\n", number[i], number[i]);



    for (int i=0;i<10;i++) number[i] = 0;

    number = (int *)calloc(10, sizeof(int));
    for (int i=0;i<10;i++)
        //printf("%x\n", *(number+i));
        printf("%d %x\n", number[i], number[i]);

    // printf("content inside the location that number is pointing to: %d\n", *number);
    // printf("location that number is pointing to: %p\n", number);
    // printf("location of number pointer: %p\n", &number);
    //
    //
    tenFloats = (float *)malloc(10 * sizeof(float));
    tenFloats[5] = 10.0;

    word = (char *)malloc(1);
    //strcpy(word, "wit238498274389");
    
    int *something = (int *)malloc(8);
    something[0] = 10;

    printf("%d %s", something[0], word);
    fflush(stdout);


    free(number);
    number = NULL;
    

    //number[1]  = 10;

    //
    //
    // printf("content: %f\n", tenFloats[5]);
    // printf("content: %f\n", *(tenFloats+5));
    //
    // printf("location: %p\n", &tenFloats[5]);
    // printf("location (index 0): %p\n", tenFloats);
    // printf("location (index 0): %p\n", &tenFloats[0]);
    //


    //printf("%p\n", &number);
}
