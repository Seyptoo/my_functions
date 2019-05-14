/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ptr_space 32
#define return_p  printf

char *my_strdup(char *ptr_str, int ptr_len){
    for(int i = 0; i < ptr_len && ptr_str != '\0'; i++)
        if(ptr_str[i] != ptr_space)
            return_p("%c", ptr_str[i]);
        return "\n";
}

int main(int argc, char *argv[]){
    return_p("%s\n", my_strdup("helloworld", 5));
    return 0;
}
