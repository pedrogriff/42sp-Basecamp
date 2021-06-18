#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putvet(int vet[], int n) // convertendo conteudo da posição do vetor em char
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(vet[i] + '0');
		i++;
	}
}

int	ft_get_index(int combn[], int n) // funcao paraa pegar os numeros maximos possiveis dado n
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (combn[i] == max) // se o array atual = numero maximo possivel dado o n
			return (i - 1); //condição de parada do programa
		if (i == (n - 1) && combn[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1); //condição de parada do programa
}

void	ft_increment(int vet[], int n, int index) // incremento conforme combinações anteriores, ela faz a soma de +1 conforme anda no array pra direita
{
	int	i;

	i = index + 1;
	vet[index]++;
	while (i <= n) // quantos laços eu teria, 3, 4, 5... de acordo com n
	{
		vet[i] = vet[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	i;
	int	pos_index;

	if (n >= 10 || n <= 0) // conforme enunciado, n seria entre 1 e 9, caso esteja fora, finaliza o programa
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			combn[i] = i;
			i++;
		}
		while (ft_get_index(combn, n) != -1) // n numero de casas que vou combinar, passado pela funcao
		{
			pos_index = ft_get_index(combn, n);
			ft_putvet(combn, n); //alternativa do putchar, putvetor
			ft_increment(combn, n, pos_index);
			write(1, ", ", 2);
		}
		ft_putvet(combn, n);
	}
}
