int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			res++;
		i++;
	}
	return (res);
}
