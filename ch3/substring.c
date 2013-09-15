#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *buff = "this is a test string";
	
	char subbuff[7];
	memcpy(subbuff, &buff[15], 6);
	subbuff[6] = '\0';

	printf("buff: %s\n" , buff);
	printf("subbuff: %s\n" , subbuff);
	
	return 0;
}
