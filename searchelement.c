#include <stdio.h>

int searchElement(int elements[], int size, int target);

int main(){
    int size = 0;

    printf("Search for an element in an array\n");
    printf("--------------------------------\n");

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];

    printf("Input %d elements of the array: \n", size);
    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &elements[i]);  
    }

    int target = 0;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int index = searchElement(elements, size, target);

    if(index != -1){
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}

int searchElement(int elements[], int size, int target){
    for(int i = 0; i < size; i++){
        if(elements[i] == target){
            return i;
        }
    }
    return -1;
}