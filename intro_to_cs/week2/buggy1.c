#include <stdio.h>
#include <cs50.h>

int get_native_int(void);

int main(void){

    // Get Size From User Input
    int i = get_native_int();
    printf("%i\n",i);



}

int get_native_int(void){
    int n;
    do{
        n = get_int("Native Integer: ");
    }
    while(n < 0);
    return n;
}
