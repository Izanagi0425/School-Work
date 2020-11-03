#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

     do
    {
        height = get_int("Height (please enter a number between 1 and 8): ");
    }
    while (height < 1 || height > 8);


    for (int i = 0; i < height; i++)
    {
        // this calculates the spaces to put in front of the hashes
        for (int h = height - 1; h > i; h--)
        {
            printf(" ");
        }

        // this calculates the number of hashes to put
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}