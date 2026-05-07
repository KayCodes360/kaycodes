#include <stdio.h>

void swap(int *num1, int *num2);

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Function: Swap two numbers using function\n");
    printf("--------------------------------------------------\n");
    
    printf("Input first number: ");
    scanf("%d", &num1); 
    
    printf("Input second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int *num1, int *num2){
    int tempNum;

    tempNum = *num1;
    *num1 = *num2;
    *num2 = tempNum;
}