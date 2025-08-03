int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
	while (*str >= 32 && *str <= 126)
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}