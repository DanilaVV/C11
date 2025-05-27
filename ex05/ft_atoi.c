#include <stdio.h>
#include <stdlib.h>

int	checknb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	checkch(char c)
{
	if (checknb(c))
		return (1);
	if (c == ' ' || c == '-' || c == '+' || c == '\t')
		return (1);
	if (c == '\v' || c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	checkstr(char *str)
{
	int	i;
	int	ch;

	i = 1;
	ch = 0;
	while (str[i] && checkch(str[i]))
	{
		if ((str[i - 1] == '-' || str[i - 1] == '+') && str[i] <= 32)
			return (0);
		if (checknb(str[i]))
			ch++;
		i++;
	}
	if (checknb(str[0]))
		return (1);
	if (!ch || !checkch(str[0]))
		return (0);
	return (1);
}

int	sign(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] && !checknb(str[i]))
	{
		if (str[i] == '-')
			res *= -1;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (!checkstr(str))
		return (0);
	while (str[i])
	{
		if (checknb(str[i]) && !checknb(str[i + 1]))
		{
			res *= 10;
			res = res + sign(str) * (str[i] - '0');
			break ;
		}
		if (checknb(str[i]))
		{
			res *= 10;
			res = res + sign(str) * (str[i] - '0');
		}
		i++;
	}
	return (res);
}
/*int	main(void)
{
	printf("%d\n", ft_atoi(" --++--2147483648sdf"));
	printf("%d\n", atoi("2147483648sdf"));
	return (0);
}*/
