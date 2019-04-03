/*
** EPITECH PROJECT, 2018
** 
** File description: strcmp() coded by Seyptoo.
** 
*/

#include <stdio.h>
#include <string.h>

int my_strcmp(char size_equal[], char size_prompt[]){
    /*
     * This function makes it possible to
     * test the reliability of the program.
    */
    int __cpt_count;
    int __value_return;
    int __equal_value;
    int __other_value;

    for(__cpt_count = 0; __cpt_count < strlen(size_equal), __cpt_count < strlen(size_prompt); __cpt_count++){
        /*
         * Creating a loop to read the
         * text and test the comparison.
        */
        __equal_value = size_equal[__cpt_count];
        __other_value = size_prompt[__cpt_count];

        if(__equal_value == __other_value){
            __value_return = 0;
        } 
        else if(__equal_value != __other_value) {
            __value_return = 1;
            break;
        }
    }

    return __value_return;
}

int main(void){
    /*
     * The function is called in the main()
     * function and tests the reliability.
    */
    if(my_strcmp("InvokeRequests", "InvokeRequests") == 0)
        printf("true");
    return 0;
}
