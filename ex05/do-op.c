#include <unistd.h>
#include "ft.h"

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_act(int n1, int n2, char c)
{
	if (c == '+')
		ft_putnbr(n1 + n2);
	else if (c == '-')
		ft_putnbr(n1 - n2);
	else if (c == '/')
		ft_putnbr(n1 / n2);
	else if (c == '*')
		ft_putnbr(n1 * n2);
	else
		ft_putnbr(n1 % n2);
	write(1, "\n", 1);
}

void	ft_check(char c)
{
	if (c == '/')
		write(1, "Stop : division by zero\n", 24);
	if (c == '%')
		write(1, "Stop : modulo by zero\n", 22);
}

int	main(int argc, char **argv)
{
	int		i;
	char	oper[5];

	i = 0;
	oper[0] = '+';
	oper[1] = '-';
	oper[2] = '/';
	oper[3] = '*';
	oper[4] = '%';
	if (argc != 4)
		return (0);
	while (i < 5)
	{
		if (argv[2][0] == oper[i])
			break ;
		i++;
	}
	if (i == 5)
		write(1, "0", 1);
	else if ((i == 2 || i == 4) && !ft_atoi(argv[3]))
		ft_check(oper[i]);
	else
		ft_act(ft_atoi(argv[1]), ft_atoi(argv[3]), oper[i]);
	return (0);
}
