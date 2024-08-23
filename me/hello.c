#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
