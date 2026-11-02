#include <cstring>
#include "functions.h"

int Count(const char* str)
{
    int k = 0;
    size_t len = strlen(str);

    for (size_t i = 0; i + 2 < len; i++)
    {
        if ((str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O') ||
            (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A'))
        {
            k++;
        }
    }

    return k;
}

char* Change(char* str)
{
    size_t len = strlen(str);
    char* dest = new char[len * 2 + 1];

    size_t i = 0;
    size_t j = 0;

    while (i < len)
    {
        if (i + 2 < len &&
            ((str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O') ||
                (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A')))
        {
            dest[j++] = '*';
            dest[j++] = '*';
            i += 3;
        }
        else
        {
            dest[j++] = str[i++];
        }
    }

    dest[j] = '\0';

    strcpy_s(str, len + 1, dest);

    return dest;
}