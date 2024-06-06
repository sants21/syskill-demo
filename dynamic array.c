#include <stdio.h>
#include <stdlib.h>

int main(){
    int count;
    scanf("%d", &count);
    char **arr = (char **)malloc(sizeof(char) * count);
    for (int i = 0; i < count ; ++i){
        arr[i] = (char *)malloc(sizeof(char) * 100);
    }
   return 0;
}