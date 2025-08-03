int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
	while (*str >= 'A' && *str <= 'Z')
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}