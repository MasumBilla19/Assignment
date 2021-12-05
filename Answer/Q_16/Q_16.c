//16. Write a C program to concatenate two strings.

#include <string.h>

int main() {
    char s1[1000],s2[1000];
    int i, len;

    //User Defined String
    printf("Enter Two String: ");
    gets(s1, s2);

    len = strlen(s1);

    for(int i = 0; s2[i] != '\0'; i++) {
    	s1[i + len] = s2[i];
	}
	s1[i + len] = '\0';

    printf("Concatenate two strings: '%s'\n", s1);

    return 0;
}


