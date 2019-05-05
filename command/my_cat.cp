/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct execute_file_testing{
    int start_file_open; // 3
    int start_nots_open; // -1
} execute_file_testing;

void cat_file(int file_dess_open, char strings_file){
    /*
     * This function will handle the
     * opening of the file and also the errors cat_file();
    */
    execute_file_testing error_file = {3, -1};
    if(file_dess_open != error_file.start_file_open && file_dess_open != error_file.start_nots_open){
        while(read(file_dess_open, &strings_file, 1) > 0)
            putchar(strings_file);

    } else if(file_dess_open == error_file.start_nots_open){
        write(1, "No file or type fo file.\n", 24);
        exit(1);
    }
}

int main(int argc, char *argv[]){
    /*
     * Here I intend to create infinite
     * arguments in main(int argc, char *argv[])
    */
    char strings_file;
    int  cpt_count;
    int  file_dess_open;

    for(cpt_count = 0; argv[cpt_count] != 0; cpt_count++){
        file_dess_open = open(argv[cpt_count], O_RDONLY);
        cat_file(file_dess_open, strings_file);
    }
}
