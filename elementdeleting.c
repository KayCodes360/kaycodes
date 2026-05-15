#include <stdio.h>

int main(){
    int size = 0;
    int position = 0;

    printf("Delete an element from an array\n");
    printf("-----------------------------\n");

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &elements[i]);  
    }

    do{
        printf("Enter the position of the element to be deleted (0 to %d): ", size - 1);
        scanf("%d", &position);
    } while(position < 0 || position >= size);

    for(int i = position; i < size - 1; i++){
        elements[i] = elements[i + 1];
    }

    size--;

    printf("The array after deleting the element is: ");

    for(int i = 0; i < size; i++){
        printf("%d ", elements[i]);
    }

    return 0;
}