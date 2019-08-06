// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

#include <stdio.h>
#include <stdlib.h>

int write_m_lines(char *, char *, int);

int main()
{
    write_m_lines("../my-file.txt", "blma", 11);

    return 0;
}

int write_m_lines(char *path, char *word, int line)
{

    FILE *output = fopen(path, "w");

    if (output == NULL) {
        printf("Error opening file!");
        return 2;
    }

    for (int i = 0; i < line; ++i) {


        fputs(word, output);
        fputs("\n", output);

    }


    fclose(output);


}