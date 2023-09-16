#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void){

    // Get Size From User Input
    int n = get_size();
    // int n;
    // do{
    //     n = get_int("Size: ");
    // }
    // while(n < 1);

    // print grid
    print_grid(n);
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         printf("#");
    //     }
    //     printf("\n");
    // }
}

int get_size(void){
    int n;
    do{
        n = get_int("Size: ");
    }
    while(n < 1);
    return n;
}

void print_grid(int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("#");
        }
        printf("\n");
    }
}