#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "tokens.h"


//main function
int main(int argc, char *argv[]) {
	
	//filename as character array (string)
	char filename[] = "test";

	/*
	 * Doesnt work yet
	if(argc > 1) {	
		filename = "test";
	} else {
		printf("No filename provided!");
		return 1;
	}
	*/

	//open file
	FILE *fptr = fopen(filename, "r");

	//struct that stores metadata about the file
	struct stat st;
	//gets the stats for filename and writes it to st
	stat(filename, &st);
	//get the size of the file
	off_t size = st.st_size;

	//print the file size
	printf("%ld\n", size);

	//refernces the TOKEN_NAMES enum from "tokens.h"
	TOKEN_NAMES name = TOKEN_OPAREN;
	
	//store the value of the comparison to con
	int con = name == TOKEN_OPAREN;
	//print con
	printf("%d\n", con);

	return 0;

}

