#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // open self
    FILE * fd;
    fd = fopen("bad_reads.c", "r");
    
    
    if (fd == 0)
    {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }
    
	char * buff ;
        int sz = 100;

        buff = malloc(sz);
	read(fd, buff, sz);

	printf("%s", buff);

	return 0;
}


