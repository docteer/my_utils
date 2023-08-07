#include <stdio.h>
#include <string.h>


int checkForUserMistakes(int argc);
int calculateChars(char *userString);


int main(int argc, char *argv[])
{
    int numberOfChars = 0;

    checkForUserMistakes(argc);
    
    numberOfChars = calculateChars(argv[1]);

    printf("Chars Calculated: %i\n", numberOfChars);
}


int checkForUserMistakes(int argc)
{
    if (argc != 2)
    {
        printf("Usage: charc <yourStringOrWhatever>\n");
        return 0;
    }
    return 1;
}


int calculateChars(char *userString)
{
    int numberOfChars = strlen(userString);


    return numberOfChars;
}