int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1)); // faz a mesma coisa do exercicio anterior através de reecursividade, ficando mais limpo o codigo
}
