#include <stdio.h>
#include <string.h>

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		ch;
	char	*st;

	while (1)
	{
		i = 0;
		ch = 0;
		while (i < ft_size(tab) - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
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
	ft_advanced_sort_string_tab(argv, ft_strcmp);
	show(argv);
	return (0);
}*/
