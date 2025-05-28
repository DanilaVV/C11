#include <stdio.h>

/*void	show(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		puts(tab[i]);
		i++;
	}
}
*/
int	ft_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_rev(char **tab, int i, char *st)
{
	st = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = st;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		ch;
	char	*st;

	while (1)
	{
		i = 0;
		ch = 0;
		while (i < ft_size(tab) - 1)
		{
			j = 0;
			while (tab[i][j] && tab[i + 1][j] && tab[i][j] == tab[i + 1][j])
				j++;
			if (tab[i][j] > tab[i + 1][j])
				ft_rev(tab, i, st);
			else
				ch++;
			i++;
		}
		if (ch == ft_size(tab) - 1)
			break ;
	}
}
/*int	main(int argc, char **argv)
{
	show(argv);
	ft_sort_string_tab(argv);
	show(argv);
	return (0);
}*/
