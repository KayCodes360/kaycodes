#include <stdio.h>

int main(){
    int size = 0;

    printf("Sort the elements in an array\n");
    printf("-----------------------------\n");

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];

    printf("Input %d elements of the array: \n", size);

    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &elements[i]);  
    }

    printf("The sorted array in descending order is: \n");

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(elements[j] < elements[j + 1]){
                int temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d ", elements[i]);
    }

    return 0;
}