#include <unistd.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
	while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}
