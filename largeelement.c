#include <stdio.h>

int largestNum(int nums[]);

int main(){
    int nums[5] = {0};

    printf("Function: Find the largest element in an array\n");
    printf("--------------------------------------------------\n");

    printf("Input 5 elements in the array: \n");
    for(int i = 0; i < 5; i++){
        printf("element  %d: ", i);
        scanf("%d", &nums[i]);
    }

    printf("The largest element in the array is: %d\n", largestNum(nums));

    return 0;
}

int largestNum(int nums[]){
    int largest = nums[0];

    for(int i = 1; i < 5; i++){
        if(nums[i] > largest){
            largest = nums[i]; 
        }
    }

    return largest;
}