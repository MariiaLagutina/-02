int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{

	while (*str >= '0' && *str <= '9')
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}