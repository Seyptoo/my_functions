/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <string.h>
#define output_check printf

int my_strlen(char strings_len[]){
    /*
     * This function is used to
     * count the number of characters.
    */
    
    int cpt_count = 0; // counter creation.

    while(strings_len[cpt_count] != '\0')
        cpt_count++;
    return (cpt_count);
}

int main(void){
    if(my_strlen("Invoke") == 6){
        output_check("true");
    }
    return 0;    
}
