int	ft_fibonacci(int index) // função para mostrar a sequencia de fibonacci, que vai somando asa 2 posições anteriores para teer o resultado
{
	if (index < 0)
		return (-1); // ses o index passado for negativo, retorna -1 conforme enunciado
	if (index == 0)
		return (0); // se o index for 0, retorna 0 por ser a "primeira" posição da seequencia (0, 1, 1, 2...)
	if (index == 1)
		return (1); // se for 1, retorna 1 por ser a segunda posição da sequencia conforme acima
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); // aqui usei recursão para pegar a posição imediatamente anterior ao index (-1)
}																	// e a posição anterior a ela (-2), somando as duasa para retornar o resultado
