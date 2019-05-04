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
    int start_file_open;
    int start_nots_open;
} execute_file_testing;

int main(int argc, char *argv[]){
    /*
     * Here I intend to create infinite
     * arguments in main(int argc, char *argv[])
    */

    char strings_file;
    int  cpt_count;
    int  file_dess_open;

    //
    execute_file_testing error_file = {3, -1};
    //

    for(cpt_count = 0; argv[cpt_count] != 0; cpt_count++){
        /*
         * Creating a loop to
         * have infinite arguments in loop.
        */
        file_dess_open = open(argv[cpt_count], O_RDONLY);
        if(file_dess_open != error_file.start_file_open && file_dess_open != error_file.start_nots_open){
            while(read(file_dess_open, &strings_file, 1) > 0)
                putchar(strings_file);

        } else if(file_dess_open == error_file.start_nots_open){
            write(1, "No file or type of file\n", 24);
            exit(1);
        }

    }

}
