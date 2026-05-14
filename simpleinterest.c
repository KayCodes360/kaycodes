#include <stdio.h>

void displayMenu();

int main(){
    int choice = 0;

    do{
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice != 1 && choice != 2 && choice != 3){
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }

        printf("\n");
    }while(choice != 1 && choice != 2 && choice != 3);

    return 0;
}

void displayMenu(){
    printf("====== Simple Interest Calculator ======\n");
    printf("1. Calculate Simple Interest\n");
    printf("2. Calculate Total Amount\n");
    printf("3. Exit\n");
}