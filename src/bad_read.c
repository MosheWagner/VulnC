#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // open self
    FILE * fd;
    fd = fopen("bad_reads.c", "r");
    
    
	char buff[40];
        int sz = 70;
	read(fd, buff,  sz);
	printf("%s",  buff);

	return 0;
}

