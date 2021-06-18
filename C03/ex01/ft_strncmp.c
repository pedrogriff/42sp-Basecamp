int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
	{
		return (0);
	}
	while (c < n - 1 && s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		}
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
