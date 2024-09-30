int	ft_isalnum(int c)
{
	int	low;
	int	up;
	int	digit;

	low = c >= 'a' && c <= 'z';
	up = c >= 'A' && c <= 'Z';
	digit = c >= '0' && c <= '9';
	return (low || up || digit);
}
