#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_digits(int *d, int n)
{
    for (int i = 0; i < n; i++)
        ft_putchar(d[i] + '0');
}

void init_digits(int *d, int n)
{
    for (int i = 0; i < n; i++)
        d[i] = i;
}

int increase_digits(int *d, int n)
{
    int i = n - 1;

    while (i >= 0 && d[i] == 9 - (n - 1 - i))
        i--;

    if (i < 0)
        return 0;

    d[i]++;

    for (int j = i + 1; j < n; j++)
        d[j] = d[j - 1] + 1;

    return 1;
}

void ft_print_combn(int n)
{
    int d[10];
    init_digits(d, n);

    while (1)
    {
        print_digits(d, n);
        if (!increase_digits(d, n))
            break;
        ft_putchar(',');
        ft_putchar(' ');
    }
}

int main(void)
{
    ft_print_combn(9);
    return 0;
}