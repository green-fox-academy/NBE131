#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file


int number_of_lines(char *);


int main()
{

    printf("Input file has %d lines.", number_of_lines("../my-file.txt"));


    return 0;
}


int number_of_lines(char *input)
{

    FILE *input_file = fopen(input, "r");

    int counter = 0;

    if (input_file == NULL) {
        printf("Error opening file!");
        return 0;
    }

    char read_line[256];

    while (fgets(read_line, 256, input_file)) {
        //  printf("%s", read_line);
        counter++;
    }


    fclose(input_file);

    return counter;

}