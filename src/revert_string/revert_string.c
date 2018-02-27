#include "revert_string.h"

void RevertString(char *str)
{
    char *start = str;
    char *end = start + strlen(str) - 1;

    while (end > start)
    {
        Swap(start, end);

        ++start;
        --end;
    }
}

