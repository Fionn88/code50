#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void){
    char c = get_char("Do you agree? ");

    if(c == 'y' || c == 'Y'){
        printf("Agree\n");
    }
    else if(c == 'N' || c == 'n'){
        printf("Not Agree\n");
    }
}