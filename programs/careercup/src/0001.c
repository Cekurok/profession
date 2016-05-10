#include <stdio.h>
#include <stdlib.h>

char *reverseWords (char *str) {
    /* reverse word code */
    int i = 0, j = 0, half = 0;
    char c;
    
    for(i=0;str[i] != '\0';i++)
        ;

    half = i >> 1;

    for(;j<half;j++,i--) {
        c      = str[j];
        str[j] = str[i];
        str[i] = c;
    }
    

    return str;

}
int main (int argc, char* argv[]) {
    char line[1000];
    int i = 0;

    printf("Enter the line :");
    while (line[i] = getchar()) {
        if(line[i++] == '\n') {
            break;
        }
    }

    line[i] = '\0';

    printf("The line before reverse : %s\n",line);
    printf("The line after reverse  : %s\n",reverseWords(line));

    return 0;
}
