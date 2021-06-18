int	ft_is_prime(int nb) // função para retornar 1 se numero for primo e 0 se não for, primo é aquele divisivel por ele próprio somente
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
