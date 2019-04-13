/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <string.h>
#define bind_check printf

void my_strupr(char struct_extension[]){
    /*
     * This function is used to change
     * the character to uppercase and accept the formality.
    */ 
    int c;

    for(c = 0; c < strlen(struct_extension); c++)
        if(struct_extension[c] >= 97 && struct_extension[c] <= 119){
            bind_check("%c", struct_extension[c] - 32);

        } else if(struct_extension[c] >= 65 && struct_extension[c] <= 97){
            bind_check("%c", struct_extension[c]);

        }
}

int main(void){
    /*
     * This function will simply call the function my_strupr() and test the
     * value.
    */
    my_strupr("Upper");
    return 0;
}
