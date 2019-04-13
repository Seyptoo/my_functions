/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <string.h>
#define bind_check printf

void my_strlwr(char target_variable[]){
    /*
     * This function is used to change
     * the character to lowercase and accept the formality.
    */
    int cpt_count;

    for(cpt_count = 0; cpt_count < strlen(target_variable); cpt_count++)
        if(target_variable[cpt_count] >= 65 && target_variable[cpt_count] <= 96){ // MAJ
            bind_check("%c", target_variable[cpt_count] + 32);   

        } else if(target_variable[cpt_count] >= 97 && target_variable[cpt_count] <= 120){ // LOW
            bind_check("%c", target_variable[cpt_count]);
        }
}

int main()
{
    /*
     * This function will simply call the function my_strlwr() and test the
     * values.
    */

    if(strcmp("", "testvalue") == 0){
        my_strlwr("TESTVALUE");    
    }
}
