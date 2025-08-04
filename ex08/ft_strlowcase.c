char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
	char *first = str;

    while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (first);
}