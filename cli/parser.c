#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"

int main(int argc, char* argv[]) {
	char * buffer = 0;
	int length;
	FILE* f = fopen(argv[0], "rb");

	TOKEN_NAMES name = TOKEN_OPAREN;

	if(f) {
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = malloc(length);
		if(buffer){
			fread(buffer, 1, length, f);
		}
		fclose(f);
	}

	if(buffer) {
		printf("%.*s", length, buffer);
	}
	
	int con = name == TOKEN_OPAREN;
	printf("%d", con);

}

