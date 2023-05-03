#include <stdio.h>
#include <stdlib.h>

enum TOKEN_NAMES {
	"case",
	"coproc",
	"do",
	"done",
	"elif",
	"else",
	"esac",
	"fi",
	"for",
	"function",
	"if",
	"in",
	"select",
	"then",
	"until",
	"while",
	"!",
	"{",
	"}",
	"time",
	"[[",
	"]]"
}

int main(int argc, char* argv[]) {
	char * buffer = 0;
	int length;
	FILE* f = fopen(argv[0], "rb");

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
}
