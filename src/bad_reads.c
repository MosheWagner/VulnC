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
    
    
	char buff[50];
    int sz = 100;
    int sz3 = 200;
	sz = max(sz, sz3);

	read(fd, buff, sz);
	printf("%s", buff);

	return 0;
}

