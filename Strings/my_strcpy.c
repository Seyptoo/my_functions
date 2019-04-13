/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <string.h>
#define output_check printf

char *my_strcpy(char default_name[], char dest_name[]){
    /*
     * It's a very simple function, 
     * to replace a value in a string.
    */
    default_name = dest_name;
    return default_name;
}

int main(void){
    /*
     * The function call takes place here,
     * and I created a condition to test.
    */
    char size_nameoff[] = "Jean";
    if(strcmp(size_nameoff, "Jean") == 0){
        output_check("%s\n", my_strcpy(size_nameoff, "Phillipe"));
    }
    return 0;
}
