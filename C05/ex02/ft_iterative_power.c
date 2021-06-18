int	ft_iterative_power(int nb, int power) // função que retorna operação de potencia
{
	int	res;

	res = nb;
	if (power < 0)
		return (0); // se potência é negativa, retorna 0
	if (power == 0)
		return (1); // conforme enunciado "Decidimos que 0 elevado a 0 deve retornar 1"
	while (power > 1) // aqui calcula o res (resultado) enquanto potencia for > 1 pra podeer elevar, vai sendo decrementado o poweer
	{
		res = res * nb; // res (inicialmente = nb) recebe elee mesmo (ex 3) 3 = 3 * 3 => 9, power deecrementa pra 2, é maior que 1, faz 9 * 3 = 27.
		power--;
	}
	return (res);
}
