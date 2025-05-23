#include <stdio.h>
#include <unistd.h>

/*void	ft_putnb(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = '0' + n;
		write(1, &c, 1);
	}
	else
	{
		ft_putnb(n / 10);
		ft_putnb(n % 10);
	}
}
*/
void	ft_foreach(int	*tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*int	main(void)
{
	int	ms[5] = {22, -45, 0, 43, 11};
	ft_foreach(ms, 5, ft_putnb);
	return (0);
}*/
