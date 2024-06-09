#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number of arrays: ");
    scanf("%d", &num);

    int **arrays = (int **)malloc(num * sizeof(int *));
    int **cum_sum = (int **)malloc(num * sizeof(int *));
    int *sizes = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        printf("Enter the size of array %d: ", i + 1);
        scanf("%d", &sizes[i]);

        arrays[i] = (int *)malloc(sizes[i] * sizeof(int));
        cum_sum[i] = (int *)malloc(sizes[i] * sizeof(int));

        printf("Enter elements of array %d: ", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            scanf("%d", &arrays[i][j]);
        }

        // Calculate cumulative sums
        cum_sum[i][0] = arrays[i][0];
        for (int j = 1; j < sizes[i]; j++) {
            cum_sum[i][j] = cum_sum[i][j - 1] + arrays[i][j];
        }
    }

    // Print cumulative sums
    for (int i = 0; i < num; i++) {
        printf("Cumulative sums for array %d: ", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", cum_sum[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < num; i++) {
        free(arrays[i]);
        free(cum_sum[i]);
    }
    free(arrays);
    free(cum_sum);
    free(sizes);

    return 0;
}
