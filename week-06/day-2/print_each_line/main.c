#include <stdio.h>

#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{

    FILE *input = fopen("../my-file.txt", "r");

    if (input == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char read_line[256];

    while (fgets(read_line, 256, input)) {
        printf("%s", read_line);
    }


    fclose(input);


    return 0;
}