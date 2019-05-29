/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>

static int my_strlen(char char_len[]){
    int i;
    while(char_len[i] != '\0')
        i++;
    return i;    
}

static int my_strchar(char ptr_str[]){
    int flags = 0;
    for(int i = 0; ptr_str[i]; i++)
        if(ptr_str[i] == ' ')
            flags++;
        flags++;
    return flags;
}

int main(){
    printf("%d\n", my_strchar("Hello World"));
    return 0;    
}
