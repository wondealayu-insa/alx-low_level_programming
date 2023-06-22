#include <ctype.h>
#include <stdio.h>

int main()
{
    char c = 'A';

    if (isupper(c))
    {
        printf("%c is an uppercase character\n", c);
    }
    else
    {
        printf("%c is not an uppercase character\n", c);
    }

    return 0;
}
