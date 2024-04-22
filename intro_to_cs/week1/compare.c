#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void){
    // char c = get_char("Do you agree? ");

    // if(c == 'y' || c == 'Y'){
    //     printf("Agree\n");
    // }
    // else if(c == 'N' || c == 'n'){
    //     printf("Not Agree\n");
    // }

    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    if (x < y){
        printf("x is less than y\n");
    }else if(x > y){
        printf("x is greater than y\n");
    }else{
        printf("x is equal to y\n");
    }
}