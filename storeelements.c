#include <stdio.h>

int main(){
    int elements[10] = {0};

    printf("Read and Print elements of an array:\n");
    printf("------------------------------------\n");

    printf("Input 10 elements in the array:\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &elements[i]);
    }

    printf("\nElements in the array are: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", elements[i]);
    }

    return 0;
}