#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *first = dest;

    while (n > 0 && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }
    return (first);
}