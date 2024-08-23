#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int letter = 0;
    int words = 1;
    int sentences = 0;
    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letter = letter + 1;
        }
        else if (text[i] == ' ')
        {
            words = words + 1;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences = sentences + 1;
        }
    }
    float L = (float) letter / (float) words * 100;
    float S = (float) sentences / (float) words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;
}
