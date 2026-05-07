#include <stdio.h>

int factorial(int num);

int main(){
    float sum = 0.0;

    printf("Function: Calculate the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5\n");
    printf("--------------------------------------------------\n");

    for(int i = 1; i <= 5; i++){
        sum += (float)factorial(i) / i;
    }

    printf("The sum of the series is: %.0f\n", sum);

    return 0;
}

int factorial(int num){
    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    
    return fact;
}