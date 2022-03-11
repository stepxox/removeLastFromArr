#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *removelast(int *local_ptr, size_t size){
    size_t newSize = sizeof(int) * (size - 1);
    int *temp = malloc(newSize);

    memmove(temp, local_ptr, newSize);

    free(local_ptr);
    return temp;
}

void removelastPtp(int **local_ptr, size_t size){
    size_t newSize = sizeof(int) * (size - 1);
    int *temp = malloc(newSize);

    memmove(temp, *local_ptr, newSize);

    free(*local_ptr);
    *local_ptr = temp;
}

int main() {

    int a[]= {0,1,2,3};
    return 0;
}
