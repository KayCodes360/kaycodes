#include <stdio.h>

void checkEvenOdd(int num);

int main(){
    int num = 0;

    printf("Function: Check if the number is Even or Odd\n");
    printf("--------------------------------------------------\n");
    
    printf("Input any number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}

void checkEvenOdd(int num){
    if(num % 2 == 0){
        printf("The entered number is Even!\n");
    }
    else{
        printf("The entered number is Odd!\n");
    }
}