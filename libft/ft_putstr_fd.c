#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	while (s[i])
		write (fd, &s[i++], 1);
}
