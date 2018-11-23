#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>

#define display_output printf

int main(int argc, char *argv[]) {
	
	if(argv[1] != NULL && argv[2] != NULL){
		char str[999];
		/*
		Here we manage the necessary arguments 
		:D it's very cool
		*/
		FILE* file_opening = fopen(argv[1], "r"); // fiability :D
		FILE* file_write = fopen(argv[2], "w"); // fiability :D

		if(file_opening != NULL) {
			/*
			Here we manage the necessary arguments 
			:D it's very cool
			*/
			if(file_opening){
				while(fscanf(file_opening, "%s", str) != EOF)
					fputs(str, file_write);
					exit(EXIT_SUCCESS);
			}

		} else if(ENOENT == errno){
			/*
			*/
			display_output("Directory false -> %s\n", argv[1]);
			exit(EXIT_SUCCESS);
		}
	}

	return 0;
}
