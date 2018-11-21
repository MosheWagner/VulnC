	
all:
	gcc -o strlen_test.out src/strlen_missing_null.c 
	gcc -o bad_read.out src/bad_read.c 
	gcc -o bad_read2.out src/bad_read2.c
	gcc -o bad_reads.out src/bad_reads.c
