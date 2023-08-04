#include <stdio.h>

void print_numbers(int *numbers, int size);

int main(void){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    print_numbers(numbers,size);

    return 0;
}

void print_numbers(int *numbers, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }
}

// a simple print value with passing pointer array;