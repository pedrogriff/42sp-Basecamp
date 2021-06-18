int	ft_iterative_factorial(int nb) // função para retornar operação fatorial a partir do nb passado
{
	int	res;

	res = 1;
	if (nb < 0) // enunciado pede que se o argumeento não for válido (ex número negativo), função deve retornar 0
		return (0);
	else if (nb <= 1) // fatorial de 0 e de 1 = 1
		return (1);
	while (nb > 0) // aqui para calcular o restante, enquanto for maior que 0 o resultado vai sendo atribuido pela mult do res (inicialmente 1)
		res = res * nb--; // pelo decremento de nb, pq vai indo se 3, 1 = 1 * 2 = 2, 2 = 2 * 1, ai o nb multiplica o 3 por 2 e por 1.
	return (res);
}
