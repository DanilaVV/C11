#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ms;

	i = 0;
	ms = malloc(length * sizeof(int));
	while (i < length)
	{
		ms[i] = f(tab[i]);
		i++;
	}
	return (ms);
}
/*
void	show(int *ms, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", ms[i]);
		i++;
	}
	puts("");
}

int	ft_pow(int n)
{
	return (n * n);
}

int	main(void)
{
	int	ms[5] = {100, -20, 76, 24, 53};
	show(ms, 5);
	int	*res = ft_map(ms, 5, ft_pow);
	show(res, 5);
	return (0);
}*/
