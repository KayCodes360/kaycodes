#include <stdio.h>

int main(){
    int size = 0;

    printf("Read and Print elements of an array in reverse order:\n");
    printf("---------------------------------------------------\n");

    printf("Input the size of the array: ");
    scanf("%d", &size);

    int elements[size];

    printf("Input %d elements in the array:\n", size);

    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &elements[i]);
    }

    printf("\nElements in the array are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", elements[i]);
    }

    printf("\nElements in reverse order are: ");
    for(int i = size - 1; i >= 0; i--){
        printf("%d ", elements[i]);
    }
    printf("\n");
    
    return 0;
}