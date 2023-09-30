#include "revert_string.h"
#include <stdio.h>
void RevertString(char *str)
{
	int len = 0;
	for(int i=0; *(str+i) != '\0'; ++i){
		++len;
	}
	printf("%d", len);
	for(int i=0; i < len/2; ++i){
		char buff = *(str+i);
		*(str+i) = *(str+len-1-i);
		*(str+len-1-i) = buff;
	}
}

