#include <stdio.h>

int isPrime(int num);

int main(){
    int num = 0;

    printf("Function: Check if a number is even or odd\n");
    printf("--------------------------------------------------\n");

    printf("Input a positive number: ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("The number %d is a prime number!\n", num);
    }
    else{
        printf("The number %d is NOT a prime number!\n", num);
    }

    return 0;
}

int isPrime(int num){
    if(num <= 1){
        return 0;
    }

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}