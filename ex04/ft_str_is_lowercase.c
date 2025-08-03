int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
	while (*str >= 'a' && *str <= 'z')
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}