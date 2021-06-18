int	ft_sqrt(int nb) // função para retornar a raiz quadrada inteira se existir, se não, retorna 0
{
	long int	n; // criei como long pq se passasse no nb o maior int possivel (2MM...) ele crashava

	n = 0;
	while (n * n <= nb) // enquanto o meu n que começa com 0 * ele mesmo for <= ao nb passado na função, incrementa n++
	{
		if (n * n == nb) // aqui quando finalmente conseguir encontrar o numero que vezes ele mesmo dá o resultado de nb (==nb), ele retorna o resultado
			return (n); // pois é justamente isso a raiz
		n++;
	}
	return (0);
}
