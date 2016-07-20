#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "../inc/tlpi_hdr.h"
#include <errno.h>

extern int errno;

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main (int argc, char *argv[]){

    int inputfd, outputfd, openFlags;
    mode_t filePerms;
    ssize_t numRead, numWrite;
    int errornum;
    char buf[BUF_SIZE];

    if((argc != 3) || (!strcmp(argv[1],"--help")) || (!strcmp(argv[1],"-h"))){
	errornum = errno;
	fprintf(stderr,"Value of error number : %d\n",errornum);
	perror("old-file new-file \n");
	fprintf(stderr," %s old-file new-file \n",argv[0]);
    }

    /* file open and close */
    
    inputfd = open(argv[1],O_RDONLY);

    close(inputfd);

    /* file close */
    return 0;
}
