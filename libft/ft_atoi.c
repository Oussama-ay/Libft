int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sig;

	i = 0;
	while ((nptr[i] >= '\r' && nptr[i] <= '\t') || nptr[i] == ' ')
		i++;
	sig = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig *= -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i++] <= '9')
		result = result * 10 + result - '0';
	return (sig * result);
}
