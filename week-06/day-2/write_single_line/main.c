#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main()
{

    FILE *output = fopen("../my-file.txt", "w");

    if (output == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char *name = "Levente";

    fputs(name, output);


    fclose(output);

    return 0;
}