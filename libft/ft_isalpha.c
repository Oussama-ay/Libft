int	ft_isalpha(int c)
{
	int	up;
	int	low;

	up = c >= 'A' && c <= 'Z';
	low = c >= 'a' && c <= 'z';
	return (up || low);
}
