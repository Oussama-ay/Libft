void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s)
	{
		(*f)(i, s + i);
		i++;
	}
}
