#include <stdio.h>

int main(){
    int size = 0;

    printf("Find the sum of the elements in an array\n");
    printf("-----------------------------------------\n");

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Input %d elements of the array: \n", size);

    int elements[size];

    printf("Input the elements of the array: \n");
    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &elements[i]);
    }

    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += elements[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}