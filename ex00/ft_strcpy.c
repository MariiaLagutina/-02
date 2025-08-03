#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src) 
{
    char  *first = dest;
    
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
	return (first);

}