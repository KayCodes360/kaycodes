#include <stdio.h>

int binaryConversion(int num);

int main(){
    int num = 0;

    printf("Function: Convert a decimal number to binary\n");
    printf("--------------------------------------------------\n");

    printf("Input any decimal number: ");
    scanf("%d", &num);
    
    printf("\nThe Binary Value is: ");
    binaryConversion(num);

    return 0;
}

int binaryConversion(int num){
    int binaryNum[32];
    int i = 0;
    
    while(num > 0){
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    } 


    for (int j = i -1; j>=0; j--){
        printf("%d", binaryNum[j]);
    }
    
    printf("\n");
}