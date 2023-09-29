#include "revert_string.h"
#include <stdio.h>

void RevertString(char *str)
{
	int size = sizeof(str)/sizeof(char)+1;
	printf("%d",sizeof(str));
	printf("%d",sizeof(char));
	printf("%d\n",size);
	int i = 0;
	while(i <= size/2){
		char buff = *(str+i);
		*(str+i) = *(str+size-i);
		*(str+size-i) = buff;
		++i;
	}
}

