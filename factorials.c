#include <stdio.h>

void displayMenu();
int calculateFactorial(int num);

int main(){
    int choice = 0;
    int num = 0; 

    do{
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice != 1 && choice != 2){
            printf("Invalid choice! Please enter 1 or 2.\n");
        }
    }while(choice != 1 && choice != 2);

    switch(choice){
        case 1:
            do{
                printf("Enter a positive integer to calculate its factorial: ");
                scanf("%d", &num);

                if(num < 0){
                    printf("Factorial is not defined for negative numbers.\n");
                }
            }while(num < 0);
            printf("The factorial of %d is: %d\n", num, calculateFactorial(num));
            break;
        case 2:
            printf("Exiting the program...\n");
            break;
    }

    return 0;
}

void displayMenu(){
    printf("===== MENU =====\n");
    printf("1. Calculate Factorial\n");
    printf("2. Exit\n");
}

int calculateFactorial(int num){
    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}