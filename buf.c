#include <stdio.h>
#include <string.h>

void overflow(char *name){
	char buf[100];
	strcpy(buf,name);
	printf("\nHello %s\n\n", buf);
}

int main(int argc, char *argv[]){
	overflow(argv[1]);
	return 0;
}
