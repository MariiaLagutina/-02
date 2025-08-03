char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
	char *first = str;

    while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (first);
}