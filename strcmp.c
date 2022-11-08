#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <wchar.h>

int _strcmp() {
    char str1[256]; 
    char str2[256];

    // Need to attribute to a variable even if array decay to a pointer, we can't increment an array name
    char *str1Ptr = str1;
    char *str2Ptr = str2;

    printf("First word : ");
    scanf("%s", str1);
    printf("\n");
    printf("Second word : ");
    scanf("%s", str2);

    printf("Strcmp result to duplicate : %i\n", strcmp(str1, str2));

    // Every array end with a \0, and is equivalent to the 0 int
    while(*str1Ptr != '\0') {
        if (*str1Ptr != *str2Ptr) {
            return *str1Ptr - *str2Ptr;
        }

        // Could use sizeof(char), but char is always 1 byte in ASCII anyway. Maybe good habit to have ?
        str1Ptr++;
        str2Ptr++;
    };

    return 0;

}