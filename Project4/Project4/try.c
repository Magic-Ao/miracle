#include <stdio.h>

int main()
{
    char str[] = "This is a Longer Road!";
    int l = word_divide(str);

    printf("%d\n", l);
    return 0;
}

int  word_divide(char str[])
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
            while (str[i] == ' ')
                i++;
        }
        else
        {
            i++;
        }
    }
    if (str[i - 1] != ' ')
        count++;

    return count;
}