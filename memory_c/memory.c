#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int int_array[10] = {3, 5, 1, 7, 2, 7, 6, 0, 8, 4};

void double_int (int* number){
    *number= *number*2;
}

void print_array(int *array, int size_array){
    for (int i = 0; i< size_array; i++) {
        printf("%d ", array[i]);
    };
    
}

int reverse_sorter(const void *first_arg, const void *second_arg) {
    int* first = (int*) first_arg;
    int* second = (int*) second_arg;
    //printf("first =  %d  and second =  %d\n", *first, *second);
    
    /* здесь ваш код сравнения, возвращающий -1, 0 или 1 */
    
    if (*first < *second){
        return 1;
    } else if (*first == *second){
            return 0;
        } else {
        return -1;
    };
        
}


int main(){

    int x = 1;
    int* y = &x;
    x = 5;
    printf("x = %d\n", x);
    //printf("y %d", y);
    printf("*y =  %d\n", *y);
    
    x=42;
    printf("x = %d\n", x);
    double_int(&x);
    printf("dubled x = %d\n", x);
    
    
    //reverse sorting of array
    printf("Initial array: \n");
    print_array(int_array, sizeof(int_array)/sizeof(int));
    
    qsort(int_array, 10, sizeof(int), reverse_sorter);
    
    printf("\n Quick Sorted array: \n");
    print_array(int_array, sizeof(int_array)/sizeof(int));

    //int_array[10] = {3, 5, 1, 7, 2, 7, 6, 0, 8, 4};
    
    return 0;
    
}
    
   
