#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*

open (const char *name, int flags, mode_t mode);

Flags :
O_RDONLY
O_WRONLY
O_RDWR
O_CREAT
O_EXCL
O_TRUNC
O_APPEND

Mode:
S_IRWXU
S_IRUSR
S_IWUSR
S_IXUSR

S_IRWXG
S_IRGRP
S_IWGRP
S_IXGRP

S_IRWXO
S_IROTH
S_IWOTH
S_IXOTH
*/

int main(int argc, char *argv[]) {
 int i = 0;
 int fdi = NULL, fdo = NULL;

 printf("program name : %s\n",argv[0]);

 if(argc != 3 || strcmp(argv[1],"--help") || strcmp(argv[1],"-h")) {
  perror(" usage <input file> <output file>\n");
  abort();
 }
  
 /* open the input file for reading */
 fdi = open(argv[1],O_WRONLY | O_TRUNC,S_IRWXU | S_IROTH | S_IXOTH); 
 
 printf("input file descriptor return value : %d\n",fdi);

 if(fdi == -1)
  perror("file open error \n");

 /* open the output file for writing */
 for(i=1;i< argc; i++) 
  printf("program arguments : %s\n",argv[i]);

 return 0;
}
