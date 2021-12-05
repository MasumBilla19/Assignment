//20. Write a C program to create a Text file and perform read, write, append operation.

#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("text.txt", "w");//open a file or create a file

    if(file == NULL) {
        printf("File Doesn't Exist!\n");
    } else {
        printf("File is Opened\n");
    }

    char fn[50];
    char str[] = "Guru99 Rocks\n";

    for (int i = 0; str[i] != '\n'; i++) {
        /* write to file using fputc() function */
        fputc(str[i], file);
    }

    fclose(file);//close a file

    return 0;
}


