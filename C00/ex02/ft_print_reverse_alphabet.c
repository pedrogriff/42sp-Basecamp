#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alphab_rev;

	alphab_rev = 'z';
	while (alphab_rev >= 'a')
	{
		ft_putchar(alphab_rev);
		alphab_rev--;
	}
}
