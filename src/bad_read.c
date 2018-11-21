#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // open self
    FILE * fd;
    fd = fopen("bad_reads.c", "r");
    
    
	char buff[40];
    int sz = 5;
    
    int MODE;
    scanf("%d", MODE);
    /*   
    if (MODE == 1) sz = 1000;
    if (MODE == 2) sz = sizeof(buff);
    if (MODE == 3) sz = 3;
    if (MODE == 4) sz = -1;
    */
	read(fd, buff, MODE);
	printf("%s",  buff);

	return 0;
}


