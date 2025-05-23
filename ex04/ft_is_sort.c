/*#include <stdio.h>

int	ft_check(int n1, int n2)
{
	return (n1 - n2);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	res1;
	int	res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			res1++;
		if (f(tab[i], tab[i + 1]) >= 0)
			res2++;
		i++;
	}
	if (res1 == length - 1 || res2 == length - 1)
		return (1);
	return (0);
}
/*int	main(void)
{
	int	ms1[5] = {1, 2, 3, 4, 5};
	int	ms2[5] = {6, 4, 2, 1, -2};
	int	ms[6] = {12, 5432, 23, 32, 11, -5};
	int (*f)(int, int);
	f = ft_check;
	printf("%d\n", ft_is_sort(ms1, 5, f));
	return (0);
}*/
