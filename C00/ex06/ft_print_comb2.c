#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	ch_s;
	char	ch_f;

	if (num <= 9)
	{
		ch_s = num + 48;
		ft_putchar2('0', ch_s);
	}
	else if (num <= max)
	{
		ch_s = (num % 10) + 48;
		ch_f = (num / 10) + 48;
		ft_putchar2(ch_f, ch_s);
	}
}

void	ft_catint(int fir, int sec)
{
	ft_putint(fir, 98);
	write(1, " ", 1);
	ft_putint(sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}
